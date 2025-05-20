using System;

namespace ExpressionLibrary
{
    public class Expression
    {
        public double A { get; private set; }
        public double B { get; private set; }
        public double C { get; private set; }
        public double D { get; private set; }

        public Expression(double a, double b, double c, double d)
        {
            A = a; B = b; C = c; D = d;
        }

        public void SetValues(double a, double b, double c, double d)
        {
            A = a; B = b; C = c; D = d;
        }

        public double Calculate()
        {
            try
            {
                if (B == 0)
                    throw new DivideByZeroException("Ділення a/b неможливе: B = 0");
                if (A / B <= 0)
                    throw new ArgumentException("Логарифм від ≤ 0: ln(a/b)");
                
                double numerator = 4 * Math.Log(A / B) + 1;
                double denominator = C + B - D + A;

                if (denominator == 0)
                    throw new DivideByZeroException("Ділення на 0 у знаменнику");

                return numerator / denominator;
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Помилка: {ex.Message}");
                return double.NaN;
            }
        }
    }
}
