namespace TextLibrary
{
    public abstract class Ryadok
    {
        protected string text;

        public string Text => text;

        protected Ryadok(string value)
        {
            text = value;
        }

        public abstract int GetLength();
        public abstract void Modify();
    }
}
