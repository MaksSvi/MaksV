#include "StringLibrary.h"

// Конструктор за замовчуванням
StringLibrary::StringLibrary() : value("") {}

// Конструктор з параметром
StringLibrary::StringLibrary(const std::string& str) : value(str) {}

// Конструктор копіювання
StringLibrary::StringLibrary(const StringLibrary& other) : value(other.value) {}

// Деструктор
StringLibrary::~StringLibrary() {}

// Отримання довжини рядка
size_t StringLibrary::getLength() const {
    return value.length();
}

// Заміна символу в рядку
void StringLibrary::replaceChar(char oldChar, char newChar) {
    for (char& c : value) {
        if (c == oldChar) c = newChar;
    }
}

// Отримання значення рядка
std::string StringLibrary::getValue() const {
    return value;
}