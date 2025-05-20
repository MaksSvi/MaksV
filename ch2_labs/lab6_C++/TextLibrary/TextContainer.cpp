#include "TextContainer.h"
#include <unordered_set>
#include <sstream>

void TextContainer::AddRow(const TextRow& row) {
    rows.push_back(row);
}

void TextContainer::RemoveRow(size_t index) {
    if (index < rows.size())
        rows.erase(rows.begin() + index);
}

void TextContainer::Clear() {
    rows.clear();
}

double TextContainer::GetCharFrequency(char c) const {
    int total = 0, count = 0;
    for (const auto& row : rows) {
        total += row.Length();
        count += row.CountChar(c);
    }
    return total == 0 ? 0.0 : static_cast<double>(count) / total;
}

void TextContainer::ReplaceChar(char oldChar, char newChar) {
    for (auto& row : rows)
        row.ReplaceChar(oldChar, newChar);
}

std::string TextContainer::GetFullText() const {
    std::ostringstream oss;
    for (const auto& row : rows)
        oss << row.GetContent() << '\n';
    return oss.str();
}

void TextContainer::RemoveDuplicates() {
    std::unordered_set<std::string> seen;
    std::vector<TextRow> uniqueRows;

    for (const auto& row : rows) {
        if (seen.insert(row.GetContent()).second)
            uniqueRows.push_back(row);
    }

    rows = std::move(uniqueRows);
}
