#include <iostream>
#include "StringLibrary.h"

int main() {
    // Демонстрація використання класу
    StringLibrary str1("Hello, World!");
    StringLibrary str2(str1); // Конструктор копіювання
    StringLibrary str3;

    std::cout << "String 1: " << str1.getValue() << " (length: " << str1.getLength() << ")\n";
    str1.replaceChar('o', '0');
    std::cout << "String 1 after replacement: " << str1.getValue() << "\n";

    std::cout << "String 2 (copy): " << str2.getValue() << "\n";
    std::cout << "String 3 (default): " << str3.getValue() << "\n";

    return 0;
}

//g++ -c StringLibrary.cpp -o StringLibrary.o
//ar rcs libStringLibrary.a StringLibrary.o

//g++ main.cpp -L. -lStringLibrary -o main

//./main
