/*
  *
 ***
*****
 ***
  *
*/

public class PatternQuesn5
{
    public static void main(String args[])
    {
        for(int i=1; i<=3; i++)
        {
            int flag = i;
            for(int j=2; j>=i; j--)
            {
                System.out.print(" ");
            }
            for(int k=0; k<flag; k++)
            {
                System.out.print("*");
                flag++;
            }
            System.out.println("");
        }
    }
}