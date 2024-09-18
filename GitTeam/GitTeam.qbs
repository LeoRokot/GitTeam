import qbs

CppApplication {
    consoleApplication: true
    install: true
    files: [
        "funcs.cpp",
        "funcs.h",
        "main.cpp",
    ]
}
