using TextLibrary;

class Program
{
    static void Main()
    {
        Ryadok r1 = new Symvoly("abcdefg");
        Ryadok r2 = new Cifry("1234567");

        Console.WriteLine("=== Symvoly ===");
        Processor.ProcessRyadok(r1);

        Console.WriteLine("\n=== Cifry ===");
        Processor.ProcessRyadok(r2);
    }
}
