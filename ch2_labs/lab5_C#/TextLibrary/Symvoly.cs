using System.Collections.Generic;

namespace TextLibrary
{
    public class Symvoly : Ryadok
    {
        public Symvoly(string value) : base(value) { }

        public override int GetLength() => text.Length;

        public override void Modify()
        {
            var result = new List<char>();
            for (int i = 0; i < text.Length; i++)
            {
                if ((i + 1) % 2 == 0)
                    result.Add(text[i]);
            }
            text = new string(result.ToArray());
        }
    }
}
