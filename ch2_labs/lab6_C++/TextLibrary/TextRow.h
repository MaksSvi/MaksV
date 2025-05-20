#ifndef TEXTROW_H
#define TEXTROW_H

#include <string>

class TextRow {
private:
    std::string content;

public:
    TextRow(const std::string& text);
    std::string GetContent() const;
    void ReplaceChar(char oldChar, char newChar);
    int CountChar(char c) const;
    int Length() const;
};

#endif
