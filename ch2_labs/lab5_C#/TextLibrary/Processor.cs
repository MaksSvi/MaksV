using System;

namespace TextLibrary
{
    public static class Processor
    {
        public static void ProcessRyadok(Ryadok r)
        {
            Console.WriteLine($"До змін: {r.Text}, Довжина: {r.GetLength()}");
            r.Modify();
            Console.WriteLine($"Після змін: {r.Text}, Довжина: {r.GetLength()}");
        }
    }
}
