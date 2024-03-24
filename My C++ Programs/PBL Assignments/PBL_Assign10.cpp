/* Assignment 10 (Group B)
Set A of customers like pizza and set B of customers like a burger. Write a C++ program to store two sets
using an array. Compute and display
a. Set of customers who like either pizza or burger or both
b. Set of customers who like both pizza and burger.
c. Set of customers who like only pizza, not burger.
d. Set of customers who like only burger not pizza.
e. Number of customers who like neither pizza nor burger. */

#include <bits/stdc++.h>
#define Types 5
using namespace std;
int main()
{
    int n;
    string name;
    int choice;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup B-Assignment 10 (PBL) :: Set A of customers like pizza and set B of customers like a burger.\n\t\t\t       Write a C++ program to store two sets using an array. Compute and display\n\t\t\t       a. Set of customers who like either pizza or burger or both.\n\t\t\t       b. Set of customers who like both pizza and burger.\n\t\t\t       c. Set of customers who like only pizza, not burger.\n\t\t\t       d. Set of customers who like only burger not pizza.\n\t\t\t       e. Number of customers who like neither pizza nor burger."<<endl;

    cout<<"\nEnter the Number of Customers: ";
    cin>>n;
    vector <string> types[5];
    
    for(int i=0; i<n; i++)
    {
        cout<<"\n<<Data Input for Costumer "<<i+1<<">>"<<endl;
        cout<<"Enter Name of Customer "<<i+1<<" : ";
        cin>>name;
        cout<<endl<<"     |- MENU -|"<<endl;
        cout<<"1) Either Pizza OR Burger OR Both"<<endl
        <<"2) Pizza And Burger Both"<<endl
        <<"3) Only Pizza"<<endl
        <<"4) Only Burger"<<endl
        <<"5) Neither Pizza Nor Burger"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        if(choice==1)
            types[0].push_back(name);
        else if(choice==2)
            types[1].push_back(name);
        else if(choice==3)
            types[2].push_back(name);
        else if(choice==4)
            types[3].push_back(name);
        else if(choice==5)
            types[4].push_back(name);
        else
            cout<<"Invalid Input!"<<endl;
    }

    cout<<endl<<"*** Set of Customers according to their Choices ***\n";

    for(int i=0; i<Types; i++)
    {
        cout<<"\nType "<<i+1<<" :: ";
        for(auto x:types[i])
            cout<<x<<"   ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}


/*
class item
{
protected:
    int itemno;
    char name[25];
    date d;

public:
    void add()
    {
        system("cls");
        cout << "\n\n\tItem No : ";
        cin >> itemno;
        cout << "\n\n\tName of the item : ";
        cin >> name;
    m:
        cout << "\n\n\tDate until fresh (dd mm yyyy) : ";
        cin >> d.dd >> d.mm >> d.yy;
        if (d.dd > 31 || d.mm > 12 || (d.yy < 2022 && d.yy > 2030))
        {
            cout << "=====>Wrong date entered!!!";
            goto m;
        }
    }
    void detail()
    {
        cout << "\n\n\tName of the item : ";
        cout << name;
        cout << "\n\tDate until fresh : ";
        cout << d.mm << "/" << d.dd << "/" << d.yy;
    }
    void show()
    {
        cout << "\n\tItem No : ";
        cout << itemno;
        cout << "\n\n\tName of the item : ";
*/