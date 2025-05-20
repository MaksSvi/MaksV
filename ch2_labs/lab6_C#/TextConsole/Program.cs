using System;

class Program
{
    static void Main()
    {
        var container = new TextContainer();

        container.AddRow(new TextRow("hello"));
        container.AddRow(new TextRow("world"));
        container.AddRow(new TextRow("hello"));

        Console.WriteLine("Original text:\n" + container.GetFullText());

        container.RemoveDuplicates();
        Console.WriteLine("\nAfter removing duplicates:\n" + container.GetFullText());

        container.ReplaceChar('l', 'x');
        Console.WriteLine("\nAfter replacing 'l' with 'x':\n" + container.GetFullText());

        double freq = container.GetCharFrequency('x');
        Console.WriteLine($"\nFrequency of 'x': {freq:F2}");
    }
}
