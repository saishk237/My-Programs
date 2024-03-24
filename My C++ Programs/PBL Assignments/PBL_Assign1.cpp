/*
Assignment 1 (Group A)
Define a class to represent a Bank account which includes the following members as:
Data members:
a. Name of the depositor
b. Account Number
c. Withdrawal amount
d. Balance amount in the account
Member Functions:
e. To assign initial values
f. To deposit an amount
g. To withdraw an amount after checking the balance
h. To display name and balance.
Implement the program by using features of OOP in C++. */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Bank
{
    char name[25];
    long long accno;
    char acctype[25];
    float balance;

    public:
    void assign(int no, char *n, char *t, float bal)
    {
        strcpy(name,n);
        accno=no;
        strcpy(acctype, t);
        balance=bal;
    }

    float deposit()
    {
        float amt;
        cout<<"\nEnter amount to deposit: ";
        cin>>amt;
        balance=balance+amt;
        return balance;
    }

    float withdraw()
    {
        float amt;
        cout<<"\nEnter amount to withdraw: ";
        cin>>amt;
        balance=balance-amt;
        return balance;
    }

    void display()
    {
        cout<<"\n\n*** A/C DETAILS ***"<<endl;
        cout<<"\nAccount number :: "<<accno<<endl;
        cout<<"Account Holder Name :: "<<name<<endl;
        cout<<"Account type :: "<<acctype<<endl;
        cout<<"A/C Balance after Deposit :: "<<deposit()<<endl;
        cout<<"A/C Balance after Withdraw :: "<<withdraw()<<endl;
    }
};

int main()
{
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 1 (PBL) :: Define a class to represent a Bank account which includes the following members as:\n\t\t\t      Data members:\n\t\t\t      a. Name of the depositor\n\t\t\t      b. Account Number\n\t\t\t      c. Withdrawal amount\n\t\t\t      d. Balance amount in the account\n\t\t\t      Member Functions:\n\t\t\t      e. To assign initial values\n\t\t\t      f. To deposit an amount\n\t\t\t      g. To withdraw an amount after checking the balance\n\t\t\t      h. To display name and balance.\n\t\t\t      Implement the program by using features of OOP in C++."<<endl;
    long long acn;
    char nm[25], act[25];
    float acb;
    Bank b1;
    cout<<"\nEnter Account No.: ";
    cin>>acn;
    cout<<"Enter Name: ";
    cin>>nm;
    cout<<"Enter Account type: ";
    cin>>act;
    cout<<"Enter A/C Balance: ";
    cin>>acb;
    b1.assign(acn, nm, act, acb);
    b1.display();
    getch();

    return 0;
}

