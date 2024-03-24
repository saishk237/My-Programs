import java.io.*;
import java.util.Scanner;

class GFG {
    public static void printPrimeFactorization(int n)
    {
        int flag=0;
        while(n>0)
        {
            if(n%2==0)
            {
                System.out.print("2 ");
                n=n/2;
            }
            else if(n%3==0)
            {
                System.out.print("3 ");
                n=n/3;
            }
            else if(n%5==0)
            {
                System.out.print("5 ");
                n=n/5;
            }
            else if(n%7==0)
            {
                System.out.print("7 ");
                n=n/7;
            }
            else
            {
                flag++;
            }
        }   
        if(flag>0)
            System.out.print(n);
        // code here
    }    
    public static void main (String[] args)
    {
        printPrimeFactorization(13);
    }
}