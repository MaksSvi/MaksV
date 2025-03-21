#include <iostream>
#include <cstring>
#include <cctype> // Для toupper()

class String {
private:
    char* str;

public:
    // Конструктор (перетворює в верхній регістр)
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        toUpperCase();
    }

    // Конструктор копіювання
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Деструктор
    ~String() {
        delete[] str;
    }

    // Перевантажений оператор присвоєння
    String& operator=(const String& other) {
        if (this == &other) return *this;
        delete[] str;
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
        return *this;
    }

    // Перетворення у верхній регістр
    void toUpperCase() {
        for (int i = 0; str[i]; i++) {
            str[i] = toupper(str[i]);
        }
    }

    // Заміна символу
    void replaceChar(char oldChar, char newChar) {
        for (int i = 0; str[i]; i++) {
            if (str[i] == oldChar) {
                str[i] = newChar;
            }
        }
    }

    // Отримання довжини рядка
    int length() const {
        return strlen(str);
    }

    // Вивід рядка
    void print() const {
        std::cout << str << std::endl;
    }
};

int main() {
    String s("hello world");

    std::cout << "Original: ";
    s.print(); // HELLO WORLD (бо верхній регістр)

    // Замінюємо символ 'O' на '0'
    s.replaceChar('O', '0');

    std::cout << "After replace: ";
    s.print(); // HELL0 W0RLD

    // Вивід довжини
    std::cout << "Length: " << s.length() << std::endl; // 11

    return 0;
}
