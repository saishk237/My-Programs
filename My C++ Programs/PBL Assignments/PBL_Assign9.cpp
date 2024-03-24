/*
Assignment 9 (Group B)
a) Write C++ program using STL to add binary numbers (assume one bit as one number) using STL stack.
b) Write C++ program using STL map for managing Person Record (Name, birth date, telephone no).
Perform operations – add, display, search, delete, and update. 
*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 9 (PBL) :: a) C++ program using STL to add binary numbers (assume one bit as one number) using STL stack."<<endl;
    stack<int>S1;
    stack<int>S2;
    stack<int>S3;
   
    char bNum1[10], bNum2[10], choice;
    int i;
    int p, q;
    do{
        cout<<"\nEnter First Binary number: ";
        cin>>bNum1;
        for(i=0; bNum1[i]!='\0'; i++)
        {
            if(bNum1[i]==0)
                S1.push(0);
            else
                S1.push(1);
        }
    
        cout<<"Enter Second Binary number: ";
        cin>>bNum2;
        for(i=0; bNum2[i]!='\0'; i++)
        {
            if(bNum2[i]==0)
                S2.push(0);
            else
                S2.push(1);
        }
        int carry=0;
    
        while(!S1.empty() || !S2.empty())
        {
            p=0, q=0;
            if(!S1.empty())
            {
                p=S1.top();
                S1.pop();
            }
            if(!S2.empty())
            {
                q=S2.top();
                S2.pop();
            }
    
            int sum = carry+p+q;
            S3.push(sum%2);
            carry = sum/2;
        }
        if(carry == 1)
            S3.push(carry);
        
        cout<<"\nAddition :: ";
        while(!S3.empty())
        {
            cout<<S3.top();
            S3.pop();
        }

        cout<<"\n\nDo you want to continue? (Y/N): ";
        cin>>choice;
    }while(choice=='Y' || choice=='y');

    return 0;
} 


/* b) Write C++ program using STL map for managing Person Record (Name, birth date, telephone no). Perform operations – add, display, search, delete, and update.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int choice, count = 1;
    long long num;
    map<long long, string> m;
    bool flag;
    string n;
    cout<<"\n\nName :: Saish Kothawade\nRoll num :: SYCOC365\nGroup A-Assignment 9 (PBL) :: b) C++ program using STL map for managing Person Record (Name, birth date, telephone no)."<<endl;
    while (1)
    {
        cout<<"\n   |- MENU -|"<<endl;
        cout<<"1) Add a record"<<endl;
        cout<<"2) Display record"<<endl;
        cout<<"3) Search record"<<endl;
        cout<<"4) Delete a record"<<endl;
        cout<<"5) Update a record"<<endl;
        cout<<"6) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "\nEnter Name: ";
                cin >> m[num];
                cout << "Enter Telephone number to be added: ";
                cin >> num;
                break;
            case 2:
                count = 1;
                for (auto it : m)
                {
                    cout << "\nPerson " << count << " Details\n";
                    cout << "Name :: " << it.second << endl;
                    cout << "Ph. Number :: " << it.first << endl;

                    count += 1;
                }
                break;

            case 3:
                flag = false;
                cout << "\nEnter Telephone number to search in record: ";
                cin >> num;
                for (auto it : m)
                {
                    if (it.first == num)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    cout << "Ph. Number found in record." << endl;
                else
                    cout << "\nPh. Number not found." << endl;
                break;

            case 4:
                cout << "\nEnter telephone number to be erased from record: ";
                cin >> num;
                for (auto it : m)
                {
                    if (it.first == num)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    m.erase(num);
                    cout << "Ph. Number deleted successfully!!!" << endl;
                }
                else
                {
                    cout << "\nPh. number Not found." << endl;
                }
                break;

            case 5:
                cout << "\nEnter details of Telephone Number to be updated: ";
                cin >> num;
                for (auto it : m)
                {
                    if (it.first == num)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    cout << "Enter new name to link with number: ";
                    cin >> n;
                    m[num] = n;
                    cout << "\nNumber details updated successfully!!!" << endl;
                }
                else
                {
                    cout << "\nPh. number Not found." << endl;
                }
                break;

            case 6:
                cout<<"\nThank You!"<<endl;
                exit(1);
                break;

            default:
                cout<<"Invalid Input! Please Try Again...";
        }
    }
    return 0;
} */