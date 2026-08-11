/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *centralLayout;
    QFrame *remoteFrame;
    QVBoxLayout *remoteLayout;
    QLabel *titleLabel;
    QGroupBox *displayGroupBox;
    QVBoxLayout *displayLayout;
    QHBoxLayout *displayHeaderLayout;
    QLabel *displayTitleLabel;
    QPushButton *displayModeButton;
    QStackedWidget *displayStackedWidget;
    QWidget *lcdPage;
    QVBoxLayout *lcdPageLayout;
    QLCDNumber *temperatureDisplay;
    QWidget *gaugePage;
    QVBoxLayout *gaugePageLayout;
    QDial *temperatureGaugeDial;
    QLabel *gaugeValueLabel;
    QPushButton *powerButton;
    QGroupBox *modeGroupBox;
    QHBoxLayout *modeLayout;
    QRadioButton *coolRadioButton;
    QRadioButton *heatRadioButton;
    QGroupBox *temperatureGroupBox;
    QVBoxLayout *temperatureLayout;
    QLabel *temperatureLabel;
    QSpinBox *temperatureSpinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(447, 692);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralLayout = new QVBoxLayout(centralwidget);
        centralLayout->setObjectName("centralLayout");
        centralLayout->setContentsMargins(36, 28, 36, 28);
        remoteFrame = new QFrame(centralwidget);
        remoteFrame->setObjectName("remoteFrame");
        remoteFrame->setMinimumSize(QSize(320, 470));
        remoteFrame->setStyleSheet(QString::fromUtf8("QFrame#remoteFrame {\n"
"    background: #f7f9fb;\n"
"    border: 1px solid #c8d0d8;\n"
"    border-radius: 8px;\n"
"}\n"
"QLabel#titleLabel {\n"
"    color: #1f2933;\n"
"    font-size: 22px;\n"
"    font-weight: 600;\n"
"}\n"
"QLabel#displayTitleLabel,\n"
"QLabel#gaugeValueLabel,\n"
"QLabel#temperatureLabel {\n"
"    color: #3d4b5c;\n"
"    font-size: 14px;\n"
"}\n"
"QLCDNumber#temperatureDisplay {\n"
"    background: #b7c7d3;\n"
"    color: #000000;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 6px;\n"
"}\n"
"QPushButton#powerButton {\n"
"    background: #d94841;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 40px;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton#powerButton:checked {\n"
"    background: #168a57;\n"
"}\n"
"QPushButton#displayModeButton {\n"
"    background: #eef3f7;\n"
"    color: #253241;\n"
"    border: 1px solid #aeb8c2;\n"
"    border-radius: 4px;\n"
"    padding: 4px 10px;\n"
"}\n"
"QPushButton#displayModeBut"
                        "ton:hover {\n"
"    background: #dde8f0;\n"
"}\n"
"QGroupBox {\n"
"    border: 1px solid #ccd5df;\n"
"    border-radius: 6px;\n"
"    margin-top: 12px;\n"
"    padding: 12px 10px 10px 10px;\n"
"    color: #283646;\n"
"    font-size: 15px;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 12px;\n"
"    padding: 0 4px;\n"
"}\n"
"QRadioButton {\n"
"    color: #253241;\n"
"    font-size: 15px;\n"
"    spacing: 8px;\n"
"}"));
        remoteFrame->setFrameShape(QFrame::Shape::StyledPanel);
        remoteFrame->setFrameShadow(QFrame::Shadow::Raised);
        remoteLayout = new QVBoxLayout(remoteFrame);
        remoteLayout->setSpacing(18);
        remoteLayout->setObjectName("remoteLayout");
        remoteLayout->setContentsMargins(24, 24, 24, 24);
        titleLabel = new QLabel(remoteFrame);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        remoteLayout->addWidget(titleLabel);

        displayGroupBox = new QGroupBox(remoteFrame);
        displayGroupBox->setObjectName("displayGroupBox");
        displayGroupBox->setMinimumSize(QSize(328, 105));
        displayLayout = new QVBoxLayout(displayGroupBox);
        displayLayout->setSpacing(8);
        displayLayout->setObjectName("displayLayout");
        displayHeaderLayout = new QHBoxLayout();
        displayHeaderLayout->setObjectName("displayHeaderLayout");
        displayTitleLabel = new QLabel(displayGroupBox);
        displayTitleLabel->setObjectName("displayTitleLabel");
        displayTitleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        displayHeaderLayout->addWidget(displayTitleLabel);

        displayModeButton = new QPushButton(displayGroupBox);
        displayModeButton->setObjectName("displayModeButton");

        displayHeaderLayout->addWidget(displayModeButton);


        displayLayout->addLayout(displayHeaderLayout);

        displayStackedWidget = new QStackedWidget(displayGroupBox);
        displayStackedWidget->setObjectName("displayStackedWidget");
        lcdPage = new QWidget();
        lcdPage->setObjectName("lcdPage");
        lcdPageLayout = new QVBoxLayout(lcdPage);
        lcdPageLayout->setObjectName("lcdPageLayout");
        lcdPageLayout->setContentsMargins(0, 0, 0, 0);
        temperatureDisplay = new QLCDNumber(lcdPage);
        temperatureDisplay->setObjectName("temperatureDisplay");
        temperatureDisplay->setMinimumSize(QSize(0, 40));
        temperatureDisplay->setMaximumSize(QSize(16777215, 70));
        temperatureDisplay->setFrameShape(QFrame::Shape::NoFrame);
        temperatureDisplay->setFrameShadow(QFrame::Shadow::Plain);
        temperatureDisplay->setSmallDecimalPoint(false);
        temperatureDisplay->setDigitCount(2);
        temperatureDisplay->setMode(QLCDNumber::Mode::Dec);
        temperatureDisplay->setSegmentStyle(QLCDNumber::SegmentStyle::Filled);
        temperatureDisplay->setProperty("intValue", QVariant(24));

        lcdPageLayout->addWidget(temperatureDisplay);

        displayStackedWidget->addWidget(lcdPage);
        gaugePage = new QWidget();
        gaugePage->setObjectName("gaugePage");
        gaugePageLayout = new QVBoxLayout(gaugePage);
        gaugePageLayout->setObjectName("gaugePageLayout");
        gaugePageLayout->setContentsMargins(0, 0, 0, 0);
        temperatureGaugeDial = new QDial(gaugePage);
        temperatureGaugeDial->setObjectName("temperatureGaugeDial");
        temperatureGaugeDial->setEnabled(false);
        temperatureGaugeDial->setMinimumSize(QSize(140, 140));
        temperatureGaugeDial->setMaximumSize(QSize(16777215, 16777215));
        temperatureGaugeDial->setMinimum(16);
        temperatureGaugeDial->setMaximum(30);
        temperatureGaugeDial->setSingleStep(1);
        temperatureGaugeDial->setValue(24);
        temperatureGaugeDial->setNotchesVisible(true);

        gaugePageLayout->addWidget(temperatureGaugeDial);

        gaugeValueLabel = new QLabel(gaugePage);
        gaugeValueLabel->setObjectName("gaugeValueLabel");
        gaugeValueLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gaugePageLayout->addWidget(gaugeValueLabel, 0, Qt::AlignmentFlag::AlignTop);

        displayStackedWidget->addWidget(gaugePage);

        displayLayout->addWidget(displayStackedWidget);


        remoteLayout->addWidget(displayGroupBox);

        powerButton = new QPushButton(remoteFrame);
        powerButton->setObjectName("powerButton");
        powerButton->setEnabled(true);
        powerButton->setMinimumSize(QSize(80, 80));
        powerButton->setMaximumSize(QSize(80, 80));
        powerButton->setCheckable(true);

        remoteLayout->addWidget(powerButton, 0, Qt::AlignmentFlag::AlignHCenter);

        modeGroupBox = new QGroupBox(remoteFrame);
        modeGroupBox->setObjectName("modeGroupBox");
        modeGroupBox->setMinimumSize(QSize(328, 70));
        modeLayout = new QHBoxLayout(modeGroupBox);
        modeLayout->setSpacing(16);
        modeLayout->setObjectName("modeLayout");
        coolRadioButton = new QRadioButton(modeGroupBox);
        coolRadioButton->setObjectName("coolRadioButton");
        coolRadioButton->setChecked(true);

        modeLayout->addWidget(coolRadioButton);

        heatRadioButton = new QRadioButton(modeGroupBox);
        heatRadioButton->setObjectName("heatRadioButton");

        modeLayout->addWidget(heatRadioButton);


        remoteLayout->addWidget(modeGroupBox);

        temperatureGroupBox = new QGroupBox(remoteFrame);
        temperatureGroupBox->setObjectName("temperatureGroupBox");
        temperatureGroupBox->setMinimumSize(QSize(328, 100));
        temperatureLayout = new QVBoxLayout(temperatureGroupBox);
        temperatureLayout->setSpacing(10);
        temperatureLayout->setObjectName("temperatureLayout");
        temperatureLabel = new QLabel(temperatureGroupBox);
        temperatureLabel->setObjectName("temperatureLabel");
        temperatureLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        temperatureLayout->addWidget(temperatureLabel);

        temperatureSpinBox = new QSpinBox(temperatureGroupBox);
        temperatureSpinBox->setObjectName("temperatureSpinBox");
        temperatureSpinBox->setMinimumSize(QSize(294, 32));
        QFont font;
        font.setPointSize(14);
        temperatureSpinBox->setFont(font);
        temperatureSpinBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        temperatureSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::UpDownArrows);
        temperatureSpinBox->setAccelerated(false);
        temperatureSpinBox->setMinimum(16);
        temperatureSpinBox->setMaximum(30);
        temperatureSpinBox->setSingleStep(1);
        temperatureSpinBox->setValue(24);

        temperatureLayout->addWidget(temperatureSpinBox);


        remoteLayout->addWidget(temperatureGroupBox);


        centralLayout->addWidget(remoteFrame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 447, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(temperatureSpinBox, &QSpinBox::valueChanged, temperatureDisplay, qOverload<int>(&QLCDNumber::display));
        QObject::connect(temperatureSpinBox, &QSpinBox::valueChanged, temperatureGaugeDial, &QDial::setValue);

        displayStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\251\272\350\260\203\351\201\245\346\216\247\345\231\250", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\347\251\272\350\260\203\351\201\245\346\216\247\345\231\250", nullptr));
        displayGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\346\230\276\347\244\272", nullptr));
        displayTitleLabel->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\270\251\345\272\246", nullptr));
        displayModeButton->setText(QCoreApplication::translate("MainWindow", "\344\273\252\350\241\250", nullptr));
        gaugeValueLabel->setText(QCoreApplication::translate("MainWindow", "24 \302\260C", nullptr));
        powerButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200", nullptr));
        modeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\250\241\345\274\217\351\200\211\346\213\251", nullptr));
        coolRadioButton->setText(QCoreApplication::translate("MainWindow", "\345\210\266\345\206\267", nullptr));
        heatRadioButton->setText(QCoreApplication::translate("MainWindow", "\345\210\266\347\203\255", nullptr));
        temperatureGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\350\260\203\350\212\202", nullptr));
        temperatureLabel->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\256\232\346\270\251\345\272\246", nullptr));
        temperatureSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " \302\260C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
