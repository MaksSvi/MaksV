using System;
using StringLibrary;

class Program
{
    static void Main()
    {
        // Створення об'єктів
        StringManipulator str1 = new StringManipulator("Hello, World!");
        StringManipulator str2 = new StringManipulator(str1); // Копія
        StringManipulator str3 = new StringManipulator(); // Порожній

        // Виведення рядків
        Console.WriteLine($"String 1: {str1.GetValue()} (довжина: {str1.GetLength()})");
        Console.WriteLine($"String 2 (copy): {str2.GetValue()}");
        Console.WriteLine($"String 3 (default): {str3.GetValue()}");

        // Заміна символів
        str1.ReplaceChar('o', '0');
        Console.WriteLine($"String 1 after replacement: {str1.GetValue()}");
    }
}
