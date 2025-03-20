#include "MyString.h"
#include <algorithm>

// Конструктор
MyString::MyString(const std::string& input) : str(input) {}

// Перетворення рядка у верхній регістр
std::string MyString::toUpperCase() const {
    std::string upperStr = str;
    std::transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    return upperStr;
}

// Обчислення довжини рядка
size_t MyString::length() const {
    return str.length();
}

// Заміна символів
void MyString::replaceChar(char oldChar, char newChar) {
    std::replace(str.begin(), str.end(), oldChar, newChar);
}

// Повернення значення рядка
std::string MyString::getValue() const {
    return str;
}
