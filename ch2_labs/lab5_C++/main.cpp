#include "Symvoly.h"
#include "Cifry.h"
#include "Processor.h"

int main() {
    Symvoly s("abcdefg");
    Cifry c("1234567");

    std::cout << "=== Symvoly ===\n";
    processRyadok(&s);

    std::cout << "\n=== Cifry ===\n";
    processRyadok(&c);

    return 0;
}
//g++ -std=c++17 -Iinclude main.cpp src/Ryadok.cpp src/Symvoly.cpp src/Cifry.cpp src/Processor.cpp -o app.exe
//chcp 65001
//./app.exe
