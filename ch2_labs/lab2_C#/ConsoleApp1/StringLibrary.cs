using System;

namespace StringLibrary
{
    public class StringManipulator
    {
        private string value;

        // Конструктор за замовчуванням
        public StringManipulator()
        {
            value = "";
        }

        // Конструктор з параметром
        public StringManipulator(string str)
        {
            value = str;
        }

        // Конструктор копіювання
        public StringManipulator(StringManipulator other)
        {
            value = other.value;
        }

        // Метод отримання довжини рядка
        public int GetLength()
        {
            return value.Length;
        }

        // Метод заміни символу
        public void ReplaceChar(char oldChar, char newChar)
        {
            value = value.Replace(oldChar, newChar);
        }

        // Метод отримання значення рядка
        public string GetValue()
        {
            return value;
        }
    }
}
