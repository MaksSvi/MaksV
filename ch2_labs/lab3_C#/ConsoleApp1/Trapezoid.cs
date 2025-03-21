using System;

class Trapezoid
{
    private double a, b, h;

    // Конструктор за замовчуванням
    public Trapezoid()
    {
        a = 1; b = 1; h = 1;
    }

    // Конструктор з параметрами
    public Trapezoid(double base1, double base2, double height)
    {
        a = base1; b = base2; h = height;
    }

    // Конструктор копіювання
    public Trapezoid(Trapezoid other)
    {
        a = other.a; b = other.b; h = other.h;
    }

    // Метод для обчислення площі
    public double Area()
    {
        return 0.5 * (a + b) * h;
    }

    // Метод для обчислення периметра (припустимо рівнобічна трапеція)
    public double Perimeter()
    {
        double side = Math.Sqrt(Math.Pow((b - a) / 2, 2) + h * h);
        return a + b + 2 * side;
    }

    // Перевантаження оператора "-" (зменшення розміру)
    public static Trapezoid operator -(Trapezoid t, double value)
    {
        return new Trapezoid(t.a - value, t.b - value, t.h - value);
    }

    // Перевантаження оператора "*" (масштабування)
    public static Trapezoid operator *(Trapezoid t1, Trapezoid t2)
    {
        return new Trapezoid(t1.a * t2.a, t1.b * t2.b, t1.h * t2.h);
    }

    // Виведення значень
    public void Display()
    {
        Console.WriteLine($"Trapezoid(a: {a}, b: {b}, h: {h})");
        Console.WriteLine($"Area: {Area()} Perimeter: {Perimeter()}");
    }
}
