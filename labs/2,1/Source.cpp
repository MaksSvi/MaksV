#include <iostream>
#include <string>

int main()
{
    //Завдання 1
    std::cout << "Завдання 1" << std::endl;
    float FloatArray1[8];
    for (int i = 0; i < sizeof(FloatArray1) / sizeof(FloatArray1[0]); i++)
    {
        if (i % 2 != 0)
        {
            FloatArray1[i] = 7,3 - i;
        }
        else if (i % 2 == 0)
        {
            FloatArray1[i] = 1,5 - i;
        }
    }
    for (int i = 0; i < sizeof(FloatArray1) / sizeof(FloatArray1[1]) - 1; i++)
    {
        for (int j = 0; j < sizeof(FloatArray1) / sizeof(FloatArray1[1]) - i - 1; j++)
        {
            if (FloatArray1[j] < FloatArray1[j + 1])
            {
                float temp = FloatArray1[j];
                FloatArray1[j] = FloatArray1[j + 1];
                FloatArray1[j + 1] = temp;
            }
        }
    }
    int k1 = 0;
    while (k1 < sizeof(FloatArray1) / sizeof(FloatArray1[0]))
    {
        if (k1 == sizeof(FloatArray1) / sizeof(FloatArray1[0]) - 1)
        {
            std::cout << FloatArray1[k1];
            k1++;
        }
        else
        {
            std::cout << FloatArray1[k1] << " | ";
            k1++;
        }
    }
    std::cout << std::endl;
    //Завдання 2
    std::cout << "Завдання 2" << std::endl;
    int IntArray1[10];
    int IntArray2[10];
    int IntArray3[10];

    for (int i = 0; i < sizeof(IntArray1) / sizeof(IntArray1[0]); i++)
    {
        IntArray1[i] = i + 58;
    }
    for (int i = 0; i < sizeof(IntArray2) / sizeof(IntArray2[0]); i++)
    {
        IntArray2[i] = 63 - i;
    }
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (IntArray1[i] == IntArray2[j])
            {
                IntArray3[k] = IntArray1[i];
                k++;
                break;
            }
        }
    }
    int MinOfArray3 = IntArray3[0];
    for (int i = 0; i < k; i++)
    {
        if (IntArray3[i] < MinOfArray3)
            MinOfArray3 = IntArray3[i];
    }
    std::cout << MinOfArray3 << std::endl;
    //Завдання 3
    std::cout << "Завдання 3" << std::endl;
    float FloatArray2[5][4] =
    {
      {5.5, 21.1, -9.3, -16.4},
      {-57.5, 79.9, -52.7, 858.2},
      {62.0, 13.1, -996.8, 33.5},
      {72.6, -53.3, -2.0, 44.4},
      {42.5, 52.8, -22.7, -223.3}
    };
    float FloatArray3[5];
    for (int j = 0; j < 5; j++)
    {
        float mult = 1;
        for (int i = 0; i < 4; i++)
        {
            if (FloatArray2[j][i] < 0)
            {
                mult = mult * FloatArray2[j][i];
            }
        }
        FloatArray3[j] = mult;
    }
    int k3 = 0;
    while (k3 < sizeof(FloatArray3) / sizeof(FloatArray3[0]))
    {
        if (k3 == sizeof(FloatArray3) / sizeof(FloatArray3[0]) - 1)
        {
            std::cout << FloatArray3[k3];
            k3++;
        }
        else
        {
            std::cout << FloatArray3[k3] << " | ";
            k3++;
        }
    }
    std::cout << std::endl;
    int IntArray4[5][5];

    return 0;
}