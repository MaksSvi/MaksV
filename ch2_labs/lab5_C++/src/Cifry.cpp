#include "Cifry.h"

Cifry::Cifry(const std::string& value) : Ryadok(value) {}

int Cifry::getLength() const {
    return text.length();
}

void Cifry::modify() {
    std::string result;
    for (size_t i = 0; i < text.length(); ++i) {
        if ((i + 1) % 2 != 0)
            result += text[i];
    }
    text = result;
}
