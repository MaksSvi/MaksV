#include "TextRow.h"
#include <algorithm>

TextRow::TextRow(const std::string& text) : content(text) {}

std::string TextRow::GetContent() const {
    return content;
}

void TextRow::ReplaceChar(char oldChar, char newChar) {
    for (char& ch : content)
        if (ch == oldChar) ch = newChar;
}

int TextRow::CountChar(char c) const {
    return std::count(content.begin(), content.end(), c);
}

int TextRow::Length() const {
    return content.size();
}
