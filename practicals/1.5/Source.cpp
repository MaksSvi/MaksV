#include <iostream>

int main()
{

    //task 1

    int A1[] = { 0, 5, 12, 44, -25, 2, 82, -3 };
    int n1 = sizeof(A1) / sizeof(int);
    int P1;
    std::cout << "Enter P:" << std::endl;
    std::cin >> P1;
    for (int i = 0; i < n1; i++)
    {
        if (A1[i] == P1)
        {
            std::cout << "Index of first appearence of P in array" << i << std::endl;
        }
        else if (i == n1 - 1)
        {
            std::cout << "P value do'nt appear in array" << std::endl;
        }
    }

    //task 2

    int A2[] = { 5, 4, 61, 22, 32, -45, -5, 0 };
    int n2 = sizeof(A2) / sizeof(int);
    int A2min = A2[0];
    for (int i = 0; i < n2; i++)
    {
        if ((A2[i] < A2min) && (A2[i] >= 0))
        {
            A2min = A2[i];
        }
    }
    std::cout << "Answer to task 2" << A2min << std::endl;

    //task 3

    int A3[] = { 4, 11, 72, -3, 54, 557, 21, -4 };
    int n3 = sizeof(A3) / sizeof(int);
    int A3min = A3[0];
    int A3max = A3[0];
    int MaxValueIndex, MinValueIndex = 0;
    for (int i = 0; i < n3; i++)
    {
        if (A3[i] < A3min)
        {
            A3min = A3[i];
            MinValueIndex = i;
        }
        else if (A3[i] > A3max)
        {
            A3max = A3[i];
            MaxValueIndex = i;
        }
    }
    int temp = A3[MaxValueIndex];
    A3[MaxValueIndex] = A3[MinValueIndex];
    A3[MinValueIndex] = temp;
    std::cout << "Values succesfully changed their places" << std::endl;

    return 0;
}