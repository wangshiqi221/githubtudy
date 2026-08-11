#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// Ui::MainWindow是由mainwindow.ui自动生成的界面类。
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// 主窗口类：负责装载遥控器界面，并编写需要运行时处理的交互逻辑。
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // 创建主窗口；parent 用于Qt的对象树内存管理。
    explicit MainWindow(QWidget *parent = nullptr);

    // 析构时释放 ui 指针指向的界面对象。
    ~MainWindow() override;

private:
    // 指向Qt Designer生成的界面对象，包含按钮、温度显示、温度调节框等控件。
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
