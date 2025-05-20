#include <iostream>
#include "../TextLibrary/TextContainer.h"

int main() {
    TextContainer container;
    container.AddRow(TextRow("hello"));
    container.AddRow(TextRow("world"));
    container.AddRow(TextRow("hello"));

    std::cout << "Original text:\n" << container.GetFullText();

    container.RemoveDuplicates();
    std::cout << "\nAfter removing duplicates:\n" << container.GetFullText();

    container.ReplaceChar('l', 'x');
    std::cout << "\nAfter replacing 'l' with 'x':\n" << container.GetFullText();

    double freq = container.GetCharFrequency('x');
    std::cout << "\nFrequency of 'x': " << freq << std::endl;

    return 0;
}

//g++ TextApp/main.cpp TextLibrary/TextRow.cpp TextLibrary/TextContainer.cpp -o TextApp
//./TextApp
