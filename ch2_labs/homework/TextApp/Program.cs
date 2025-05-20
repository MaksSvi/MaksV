using System;

class TextContainer
{
    private string[] lines;

    public TextContainer(string text)
    {
        lines = text.Split(new[] { "\r\n", "\n" }, StringSplitOptions.None);
    }

    public string this[int index]
    {
        get
        {
            if (index >= 0 && index < lines.Length)
                return lines[index];
            else
                throw new IndexOutOfRangeException("Невірний індекс рядка.");
        }
    }

    public int LineCount
    {
        get { return lines.Length; }
    }
}

class Program
{
    static void Main()
    {
        string text = "Перший рядок\nДругий рядок\nТретій рядок";
        TextContainer container = new TextContainer(text);

        Console.WriteLine("Кількість рядків у тексті: " + container.LineCount);
        for (int i = 0; i < container.LineCount; i++)
        {
            Console.WriteLine($"Рядок {i + 1}: {container[i]}");
        }
    }
}
//dotnet run
