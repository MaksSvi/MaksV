using System;

class Program
{
    static void Main()
    {
        // Введення рядка користувачем
        Console.Write("Enter string: ");
        string userInput = Console.ReadLine();

        // Створення об'єкта класу
        MyString myStr = new MyString(userInput);

        // Виведення довжини рядка
        Console.WriteLine("String length: " + myStr.Length());

        // Виведення рядка у верхньому регістрі
        Console.WriteLine("Uppercase string: " + myStr.ToUpperCase());

        // Заміна символів
        Console.Write("Enter the symbol to replace: ");
        string oldCharInput = Console.ReadLine();
        char oldChar = oldCharInput.Length > 0 ? oldCharInput[0] : '\0'; // Перевіряємо, щоб не було помилки

        Console.Write("Enter a new symbol: ");
        string newCharInput = Console.ReadLine();
        char newChar = newCharInput.Length > 0 ? newCharInput[0] : '\0'; // Те саме

        myStr.ReplaceChar(oldChar, newChar);
        Console.WriteLine("String after replacement: " + myStr.GetValue());
    }
}
