#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

// 程序入口：创建 Qt 应用对象、加载翻译文件、显示主窗口。
int main(int argc, char *argv[])
{
    // QApplication 负责管理 Qt Widgets 应用的事件循环和全局资源。
    QApplication a(argc, argv);

    // 根据系统界面语言查找对应的翻译文件，例如 study_zh_CN。
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "study_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            // 找到可用翻译后安装到应用中，后续界面文本会使用该翻译。
            a.installTranslator(&translator);
            break;
        }
    }

    // 创建并显示主窗口，界面内容来自 mainwindow.ui。
    MainWindow w;
    w.show();

    // 进入 Qt 事件循环，等待用户点击按钮、调节温度等操作。
    return QApplication::exec();
}
