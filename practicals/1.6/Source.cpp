#include <iostream>

int main()
{

    //task 1
    int Num1_1;
    std::cout << "Enter number" << std::endl;
    std::cin >> Num1_1;
    int Size1 = sizeof(Num1_1) * 8;
    int CounterOf1 = 0, CounterOf0 = 0;
    for (int i = 0; i < Size1; i++)
    {
        int Mask = 1 << i;
        int bitNum1_1 = Num1_1 & Mask;
        if (bitNum1_1 != 0)
        {
            CounterOf1++;
        }
        else
        {
            CounterOf0++;
        }
    }
    int MoreChars;
    if (CounterOf0 == CounterOf1)
    {
        std::cout << "The number of 0s and 1s in the binary code is equal" << std::endl;
    }
    else if (CounterOf1 < CounterOf0)
    {
        std::cout << "There are more 0s in binary form of this number" << std::endl;
    }
    else if (CounterOf1 > CounterOf0)
    {
        std::cout << "There are more 1s in binary form of this number" << std::endl;
    }

    //task 2
    int Num2_1, Num2_2;
    std::cout << "Enter first number" << std::endl;
    std::cin >> Num2_1;
    std::cout << "Enter second number" << std::endl;
    std::cin >> Num2_2;
    int Size2 = sizeof(Num2_1) * 8;
    int result2 = 0;
    for (int i = 0; i < Size2; i++)
    {
        int Mask = 1 << i;
        int bitNum2_1 = Num2_1 & Mask;
        int bitNum2_2 = Num2_2 & Mask;
        if (((bitNum2_1 != 0) && (bitNum2_2 == 0)) || ((bitNum2_1 == 0) && (bitNum2_2 != 0)))
        {
            result2 = result2 ^ Mask;
        }
    }
    std::cout << "result is" << result2 << std::endl;

    return 0;
}