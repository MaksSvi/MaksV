namespace FigureLibrary
{
    public class Rhombus : Figure
    {
        public Rhombus(Point[] points) : base(points) { }

        public double GetPerimeter()
        {
            double side = SideLength(0);
            return 4 * side;
        }

        public double GetArea()
        {
            double d1 = vertices[0].DistanceTo(vertices[2]);
            double d2 = vertices[1].DistanceTo(vertices[3]);
            return (d1 * d2) / 2;
        }

        public string GetInfo()
        {
            return $"Rhombus with vertices: " +
                   $"{string.Join(", ", vertices.Select(p => $"({p.X}, {p.Y})"))}";
        }
    }
}
