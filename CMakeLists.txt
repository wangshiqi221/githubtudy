cmake_minimum_required(VERSION 3.16)

# 定义项目名称、版本号，并声明本项目使用 C++。
project(study VERSION 0.1 LANGUAGES CXX)

# 开启 Qt 自动处理：.ui 生成头文件、QObject 宏生成 moc 文件、资源文件生成 rcc 文件。
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# 使用 C++17 标准，并要求编译器必须支持该标准。
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找 Qt5 或 Qt6 的 Widgets 与 LinguistTools 模块。
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

# 翻译源文件，构建时会生成对应的 Qt 翻译输出。
set(TS_FILES study_zh_CN.ts)

# 项目源码列表；新增 .h/.cpp/.ui 文件时需要加入这里。
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        ${TS_FILES}
)

# Qt6 使用 qt_add_executable 创建可执行程序。
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(study
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET study APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    # 根据翻译源文件生成 Qt 翻译文件。
    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    # Qt5 分支：Android 平台构建动态库，桌面平台构建可执行程序。
    if(ANDROID)
        add_library(study SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(study
            ${PROJECT_SOURCES}
        )
    endif()

    # Qt5 使用 qt5_create_translation 生成翻译文件。
    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

# 链接 Qt Widgets 库，提供 QMainWindow、QPushButton、QSpinBox 等控件。
target_link_libraries(study PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.study)
endif()

# 设置应用程序包属性；WIN32_EXECUTABLE TRUE 表示 Windows 下不弹出控制台窗口。
set_target_properties(study PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# 使用 GNUInstallDirs 提供标准安装目录变量。
include(GNUInstallDirs)

# 定义安装规则，指定不同平台产物的安装位置。
install(TARGETS study
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Qt6 可执行目标需要 finalization，用于补齐 Qt 平台相关的最终处理。
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(study)
endif()
