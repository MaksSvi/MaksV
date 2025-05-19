#include "Symvoly.h"

Symvoly::Symvoly(const std::string& value) : Ryadok(value) {}

int Symvoly::getLength() const {
    return text.length();
}

void Symvoly::modify() {
    std::string result;
    for (size_t i = 0; i < text.length(); ++i) {
        if ((i + 1) % 2 == 0)
            result += text[i];
    }
    text = result;
}
