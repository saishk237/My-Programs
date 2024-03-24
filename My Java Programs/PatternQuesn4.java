/*
*
**
***
****
*****
****
***
**
*
*/
public class PatternQuesn4 
{
    public static void main(String args[])
    {
        for(int i=1; i<=5; i++)
        {
            for(int j=0; j<i; j++)
            {
                System.out.print("*");
            }
            System.out.println("");
        }
        for(int k=1; k<=4; k++)
        {
            for(int j=4; j>=k; j--)
            {
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
