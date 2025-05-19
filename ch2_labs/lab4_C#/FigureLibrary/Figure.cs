namespace FigureLibrary
{
    public class Point
    {
        public double X { get; }
        public double Y { get; }

        public Point(double x, double y)
        {
            X = x;
            Y = y;
        }

        public double DistanceTo(Point other)
        {
            double dx = X - other.X;
            double dy = Y - other.Y;
            return Math.Sqrt(dx * dx + dy * dy);
        }
    }

    public class Figure
    {
        protected Point[] vertices;

        public Figure(Point[] points)
        {
            vertices = points;
        }

        public double SideLength(int index)
        {
            int nextIndex = (index + 1) % vertices.Length;
            return vertices[index].DistanceTo(vertices[nextIndex]);
        }

        public Point[] GetVertices()
        {
            return vertices;
        }
    }
}
