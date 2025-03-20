#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>

class MyString {
private:
    std::string str;

public:
    // Конструктор
    MyString(const std::string& input);

    // Метод повертає рядок у верхньому регістрі
    std::string toUpperCase() const;

    // Метод повертає довжину рядка
    size_t length() const;

    // Метод замінює всі входження oldChar на newChar
    void replaceChar(char oldChar, char newChar);

    // Метод для отримання значення рядка
    std::string getValue() const;
};

#endif
