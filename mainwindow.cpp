#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QAbstractSpinBox>
#include <QColor>
#include <QPalette>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // 从mainwindow.ui创建所有控件，并建立.ui中配置的信号槽连接。
    ui->setupUi(this);

    // 温度调节范围限制为常见空调温度区间，每次点击上下箭头变化步长为1。
    ui->temperatureSpinBox->setRange(16, 30);
    ui->temperatureSpinBox->setSingleStep(1);
    // 将Spinbox的右侧按钮设置为上下箭头的形式
    ui->temperatureSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

    // 将“设定温度”输入框设置为白底深色文字。
    //取出调色板，设置输入框背景颜色为白色，文本颜色为深灰色
    QPalette temperaturePalette = ui->temperatureSpinBox->palette();
    temperaturePalette.setColor(QPalette::Base, Qt::white);
    temperaturePalette.setColor(QPalette::Text, QColor(31, 41, 51));
    ui->temperatureSpinBox->setPalette(temperaturePalette);

    // LCD温度显示与温度调节框的值保持一致，display()为LCDNumber自带的显示函数
    ui->temperatureDisplay->display(ui->temperatureSpinBox->value());
    ui->temperatureGaugeDial->setValue(ui->temperatureSpinBox->value());

    //设置仪表盘的文本显示
    ui->gaugeValueLabel->setText(QString::number(ui->temperatureSpinBox->value()) + tr(" °C"));

    //切换按钮（保持某一状态）
    ui->displayModeButton->setCheckable(true);
    ui->displayModeButton->setChecked(false);
    ui->displayModeButton->setText(tr("仪表"));

    // 开机显示温度区域，关机隐藏整个显示面板。
    ui->displayGroupBox->setVisible(ui->powerButton->isChecked());

    //按钮被选中，文字变为“关”
    ui->powerButton->setText(ui->powerButton->isChecked() ? tr("关") : tr("开"));

    // 点击电源按钮：开机为绿色“关”，关机为红色“开”。
    connect(ui->powerButton, &QPushButton::toggled, this, [this](bool checked) {
        ui->powerButton->setText(checked ? tr("关") : tr("开"));
        ui->displayGroupBox->setVisible(checked);
        if (checked) {
            // 再次保证温度一致性。
            ui->temperatureDisplay->display(ui->temperatureSpinBox->value());
        }
    });

    // 点击右上角按钮时，切换页面。
    connect(ui->displayModeButton, &QPushButton::toggled, this, [this](bool checked) {
        ui->displayStackedWidget->setCurrentIndex(checked ? 1 : 0);
        ui->displayModeButton->setText(checked ? tr("数字") : tr("仪表"));
    });

    // 温度变化时，数字屏、仪表盘指针和文字同步。
    connect(ui->temperatureSpinBox, qOverload<int>(&QSpinBox::valueChanged), this, [this](int value) {
        ui->temperatureGaugeDial->setValue(value);
        ui->gaugeValueLabel->setText(QString::number(value) + tr(" °C"));
        ui->temperatureDisplay->display(value);
    });
}

// 析构主窗口，释放Qt Designer创建的对象。
MainWindow::~MainWindow()
{
    delete ui;
}
