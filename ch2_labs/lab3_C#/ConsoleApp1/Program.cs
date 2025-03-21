using System;

class MyString
{
    private string str;

    // Конструктор (перетворює в верхній регістр)
    public MyString(string s)
    {
        str = s.ToUpper();
    }

    // Метод заміни символів
    public void ReplaceChar(char oldChar, char newChar)
    {
        str = str.Replace(oldChar, newChar);
    }

    // Метод отримання довжини рядка
    public int Length()
    {
        return str.Length;
    }

    // Метод для виводу рядка
    public void Print()
    {
        Console.WriteLine(str);
    }
}

class Program
{
    static void Main()
    {
        MyString s = new MyString("hello world");

        Console.Write("Original: ");
        s.Print(); // HELLO WORLD

        // Замінюємо 'O' на '0'
        s.ReplaceChar('O', '0');

        Console.Write("After replace: ");
        s.Print(); // HELL0 W0RLD

        // Виводимо довжину рядка
        Console.WriteLine("Length: " + s.Length()); // 11
    }
}
