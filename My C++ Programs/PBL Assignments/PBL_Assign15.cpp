/* Assignment 15 (Group C)
Write a C++ Program to Check whether Character is Uppercase, Lowercase, Digit or Special Character. */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c;
    char choice, ch;
    string str;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup C-Assignment 15 (PBL) :: Write a C++ Program to Check whether Character is Uppercase, Lowercase,\n\t\t\t       Digit or Special Character."<<endl;
    do
    {
        cout<<"\nEnter a Character: ";
        cin>>str;

        if(str.size()==1)
        {
            ch = str[0];
            c = int(ch);
            if(c>=65 && c<=90)
            {
                cout<<"Uppercase"<<endl;
            }
            else if(c>=97 && c<=122)
            {
                cout<<"Lowercase"<<endl;
            }
            else if(c>=48 && c<=57)
            {
                cout<<"Digit"<<endl;
            }
            else if((c>=31 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=126))
            {
                cout<<"Special Character"<<endl;
            }
            else
                cout<<"Invalid Input! Please Try Again"<<endl;
        }
        else
        {
            cout<<"Invalid Input! Enter a single character"<<endl;
        }

        cout<<"\nDo you want to continue? (Y/N)"<<endl;
        cin>>choice;
    }
    while(choice=='Y' || choice=='y'); 

    return 0;
}