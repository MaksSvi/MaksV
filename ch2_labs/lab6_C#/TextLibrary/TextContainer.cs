using System.Collections.Generic;
using System.Linq;

public class TextContainer : IDuplicateHandler
{
    private List<TextRow> rows = new List<TextRow>();

    public void AddRow(TextRow row)
    {
        rows.Add(row);
    }

    public void RemoveRow(int index)
    {
        if (index >= 0 && index < rows.Count)
            rows.RemoveAt(index);
    }

    public void Clear()
    {
        rows.Clear();
    }

    public double GetCharFrequency(char c)
    {
        int total = rows.Sum(r => r.Length);
        if (total == 0) return 0;

        int count = rows.Sum(r => r.CountChar(c));
        return (double)count / total;
    }

    public void ReplaceChar(char oldChar, char newChar)
    {
        foreach (var row in rows)
            row.ReplaceChar(oldChar, newChar);
    }

    public string GetFullText()
    {
        return string.Join("\n", rows.Select(r => r.Content));
    }

    public void RemoveDuplicates()
    {
        var unique = new HashSet<string>();
        rows = rows.Where(r => unique.Add(r.Content)).ToList();
    }
}
