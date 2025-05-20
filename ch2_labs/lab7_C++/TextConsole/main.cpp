#include <iostream>
#include <vector>
#include "../ExpressionLibrary/Expression.h"


int main() {
    std::vector<Expression> expressions = {
        Expression(4, 2, 1, 3),
        Expression(0, 0, 1, 2),     // B = 0
        Expression(5, 1, -6, 0)     // Denominator = 0
    };

    for (size_t i = 0; i < expressions.size(); ++i) {
        std::cout << "Об'єкт " << i + 1 << ": ";
        try {
            double result = expressions[i].Calculate();
            std::cout << "результат = " << result << std::endl;
        }
        catch (const std::exception& ex) {
            std::cout << "помилка: " << ex.what() << std::endl;
        }
    }

    return 0;
}

//g++ TextConsole/main.cpp ExpressionLibrary/Expression.cpp -o ExpressionApp
//chcp 65001
//./ExpressionApp