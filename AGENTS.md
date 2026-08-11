# Repository Guidelines

1his is a small Qt Widgets desktop application built with CMake and C++17. It currently provides a main window, one push button, and Chinese translation support.

## Project Structure & Module Organization

- `main.cpp`: application entry point; loads the locale translator and starts `QApplication`.
- `mainwindow.h`, `mainwindow.cpp`, `mainwindow.ui`: main window class, implementation, and Qt Designer UI definition.
- `study_zh_CN.ts`: Chinese translation source consumed by Qt's Linguist tooling.
- `CMakeLists.txt`: project configuration, Qt dependency discovery, source list, translation generation, and install rules.
- `build/`: generated build output. Do not edit or commit files under it.

Keep new UI in `.ui` files where possible. Add new C++ classes as matching `.h`/`.cpp` pairs and register the sources in `CMakeLists.txt`.

## Build, Test, and Development Commands

Open `CMakeLists.txt` with Qt Creator and use the configured `Desktop Qt 6.11.1 MinGW 64-bit` kit. Build from Qt Creator with `Ctrl+B`.

From a shell with the Qt kit environment loaded:

```bash
cmake -S . -B build/Desktop_Qt_6_11_1_MinGW_64_bit_Debug -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug
cmake --build build/Desktop_Qt_6_11_1_MinGW_64_bit_Debug
```

Run the app with:

```bash
./build/Desktop_Qt_6_11_1_MinGW_64_bit_Debug/study.exe
```

The build regenerates translation output from `study_zh_CN.ts` automatically.

## Coding Style & Naming Conventions

- Use 4 spaces for indentation; do not use tabs.
- Follow Qt and existing project style: classes in `PascalCase`, files in lowercase `snake_case`, and symbols in `camelCase`.
- Keep Qt-generated UI member names and header guards as-is.
- Include project headers with quoted includes.
- No formatter or linting configuration is present; keep new code consistent with the surrounding files.

## Testing Guidelines

No test framework or test target is configured yet. When adding behavior beyond the current UI shell, add Qt Test coverage in a `tests/` directory and a CMake test target. Name test files by class or scenario, such as `test_mainwindow.cpp`, and keep each test focused on one behavior.

## Commit & Pull Request Guidelines

No repository-specific Git history is available to infer a convention from. Use concise imperative messages such as `Add translation loading` or `Fix main window title`. Keep commits scoped to one logical change. For pull requests, describe the problem and solution, link the relevant issue, and include a screenshot for UI changes.
