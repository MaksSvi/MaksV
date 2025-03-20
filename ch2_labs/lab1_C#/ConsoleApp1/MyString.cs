using System;

public class MyString
{
    private string str;

    // Конструктор
    public MyString(string input)
    {
        str = input;
    }

    // Метод повертає рядок у верхньому регістрі
    public string ToUpperCase()
    {
        return str.ToUpper();
    }

    // Метод повертає довжину рядка
    public int Length()
    {
        return str.Length;
    }

    // Метод замінює всі входження oldChar на newChar
    public void ReplaceChar(char oldChar, char newChar)
    {
        str = str.Replace(oldChar, newChar);
    }

    // Метод для отримання значення рядка
    public string GetValue()
    {
        return str;
    }
}

