public class TextRow
{
    private string content;

    public TextRow(string text)
    {
        content = text;
    }

    public string Content => content;

    public void ReplaceChar(char oldChar, char newChar)
    {
        content = content.Replace(oldChar, newChar);
    }

    public int CountChar(char c)
    {
        return content.Count(ch => ch == c);
    }

    public int Length => content.Length;
}
