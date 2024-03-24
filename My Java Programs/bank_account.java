import java.util.*;
class bank_account
{
    String name;
    long account_number;
    double balance_amount;
    bank_account(String n, long a, double b)
    {
        name = n;
        account_number = a;
        balance_amount = b;
    }

    void deposit(double d)
    {
        if(d > 0)
        {
            balance_amount = balance_amount + d;
        }
        else
        {
            System.out.println("Invalid Amount");
        }
    }

    void withdraw(double w)
    {
        if(w> 0 && w <= balance_amount)
        {
            balance_amount = balance_amount - w;
        }
        else
        {
            System.out.println("Invalid Amount");
        }
    }
    void display()
    {
        System.out.println("\nName:" + name);
        System.out.println("Balance : "+ balance_amount);
    }
    public static void main(String args[])
    {
        Scanner Sc = new Scanner(System.in);
        String n, t;
        double b;
        long a;
        System.out.print("Enter Name : ");
        n = Sc.nextLine();
        System.out.print ("Enter Account number : ");
        a = Sc.nextLong();
        System.out.print("Enter Balance : ");
        b = Sc.nextDouble();
        bank_account bank = new bank_account(n, a, b);
        bank.display();
        System.out.print("\nEnter amount to be deposited : ");
        double d = Sc.nextDouble();
        bank.deposit(d);
        bank.display();
        System.out.print("\nEnter amount to be withdrawn: ");
        double w = Sc.nextDouble();
        bank.withdraw(w);
        bank.display();
    }
}