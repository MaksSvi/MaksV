using System;

class Program
{
    static void Main()
    {
        // Створення об'єктів
        Trapezoid TR1 = new Trapezoid(); // Конструктор за замовчуванням
        Trapezoid TR2 = new Trapezoid(4, 6, 5); // Конструктор з параметрами
        Trapezoid TR3 = new Trapezoid(TR2); // Конструктор копіювання

        // Зменшити TR3 на 3 одиниці
        TR3 = TR3 - 3;

        // Помножити TR2 та TR3 і помістити в TR1
        TR1 = TR2 * TR3;

        // Вивести результати
        Console.WriteLine("TR1: "); TR1.Display();
        Console.WriteLine("TR2: "); TR2.Display();
        Console.WriteLine("TR3: "); TR3.Display();
    }
}
