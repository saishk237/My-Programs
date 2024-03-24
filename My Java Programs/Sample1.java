import java.util.Scanner;
import java.lang.Math;
public class Sample1
{
    public static int gcd(int n1, int n2)
    {
        int hcf1;
        for(int i=1; i<Math.min(n1,n2); i++)
        {
            
        }
        return hcf1;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 2 Nos.:");
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        int hcf=gcd(num1, num2);
        System.out.print("Greatest Common Divisor of "+num1+" & "+num2+" = "+hcf);
    }
}
/*
import java.util.Scanner;
class Pen
{
    String color, type;
    public void write()
    {
        System.out.println("Write something");
    }
    public void printColor()
    {
        System.out.println(this.color);
        System.out.println(this.type);
    }
}

class Student
{
    String name;
    int age;
    public void printInfo()
    {
        System.out.println(this.name);
        System.out.println(this.age);
    }
}
public class Sample1
{
    public static void main(String args[])
    {
        Pen p1 = new Pen();
        p1.color="Blue";
        p1.type="Ball";
        p1.write();

        Pen p2= new Pen();
        p2.color="Black";
        p2.type="Gel";
        p2.write();

        p1.printColor();
        p2.printColor();

        Student s1=new Student();
        Student s2=new Student();
        s1.name="Saish";
        s1.age=21;
        s2.name="Piyush";
        s2.age=18;
        s1.printInfo();
        s2.printInfo();
    }
}
*/