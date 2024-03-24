import java.util.*;
abstract class shape
{
    int x,y;
    abstract void area(double x,double y);
}
class Rectangle extends shape
{
    void area(double x, double y)
    {
        System.out.println("Area of rectangle is :"+(x*y)); }
    }
class Circle extends shape
{
    void area(double x,double y)
    {
        System.out.println("Area of circle is :"+(3.14*x*x));
    }
}
class Triangle extends shape
{
    void area(double x,double y)
    {
        System.out.println("Area of triangle is :"+(0.5*x*y));
    }
}
public class AbstractDDemo
{
    public static void main(String[] args)
    {
        Rectangle r=new Rectangle();
        r.area(3,4);
        Circle c=new Circle();
        c.area(5,2);
        Triangle t=new Triangle();
        t.area(1,5);
    }
}