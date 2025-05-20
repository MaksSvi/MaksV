#ifndef TEXTCONTAINER_H
#define TEXTCONTAINER_H

#include <vector>
#include <string>
#include "TextRow.h"
#include "IDuplicateHandler.h"

class TextContainer : public IDuplicateHandler {
private:
    std::vector<TextRow> rows;

public:
    void AddRow(const TextRow& row);
    void RemoveRow(size_t index);
    void Clear();
    double GetCharFrequency(char c) const;
    void ReplaceChar(char oldChar, char newChar);
    std::string GetFullText() const;
    void RemoveDuplicates() override;
};

#endif
