using System;
using FigureLibrary;

class Program
{
    static void Main()
    {
        var points = new Point[]
        {
            new Point(0, 0),
            new Point(2, 2),
            new Point(4, 0),
            new Point(2, -2)
        };

        Rhombus rhombus = new Rhombus(points);

        Console.WriteLine(rhombus.GetInfo());
        Console.WriteLine($"Perimeter: {rhombus.GetPerimeter():F2}");
        Console.WriteLine($"Area: {rhombus.GetArea():F2}");
    }
}
