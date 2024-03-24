import java.util.Scanner;
class GetWordCount
{
    public static void main(String arg[])
    {
        int i, count=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string:");
        String name = sc.nextLine();
        for(i=0; i<name.length(); i++)
        {
            if(name.charAt(i)==' ' && name.charAt(i+1)!=' ')
            {
                count++;
            }
        }
        System.out.print("\nWord count = "+count);
    }
}