#ifndef STRINGLIBRARY_H
#define STRINGLIBRARY_H

#include <string>

class StringLibrary {
private:
    std::string value; // Закрите поле

public:
    // Конструктори
    StringLibrary();
    StringLibrary(const std::string& str);
    StringLibrary(const StringLibrary& other);
    
    // Деструктор
    ~StringLibrary();
    
    // Методи
    size_t getLength() const;
    void replaceChar(char oldChar, char newChar);
    std::string getValue() const;
};

#endif
