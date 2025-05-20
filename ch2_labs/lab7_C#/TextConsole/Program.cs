using System;
using ExpressionLibrary;

class Program
{
    static void Main()
    {
        var expressions = new Expression[]
        {
            new Expression(4, 2, 1, 3),
            new Expression(0, 0, 1, 2),    // лог і ділення на 0
            new Expression(5, 1, -6, 0),   // знаменник = 0
        };

        for (int i = 0; i < expressions.Length; i++)
        {
            Console.WriteLine($"Об'єкт {i + 1}: результат = {expressions[i].Calculate()}");
        }
    }
}
