#include <iostream>
#include "MyString.h"

int main() {
    // Введення рядка користувачем
    std::string userInput;
    std::cout << "Enter string: ";
    std::getline(std::cin, userInput);

    // Створення об'єкта класу
    MyString myStr(userInput);

    // Виведення довжини рядка
    std::cout << "String length: " << myStr.length() << std::endl;

    // Виведення рядка у верхньому регістрі
    std::cout << "Uppercase string: " << myStr.toUpperCase() << std::endl;

    // Заміна символів
    char oldChar, newChar;
    std::cout << "Enter the symbol to replace: ";
    std::cin >> oldChar;
    std::cout << "Enter a new symbol: ";
    std::cin >> newChar;

    myStr.replaceChar(oldChar, newChar);
    std::cout << "String after replacement: " << myStr.getValue() << std::endl;

    return 0;
}

//g++ -Wall -Wextra -g3 main.cpp MyString.cpp -o output/main.exe

//output/main.exe