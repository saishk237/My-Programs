/* Assignment 14 (Group C) 
Write a C++ program to sort N names in alphabetical order. */

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup C-Assignment 14 (PBL) :: C++ program to sort N names in alphabetical order."<<endl;
    int n;
    char choice;
    do{
        cout<<"\nEnter the value of N: ";
        cin>>n;
        char str[n][25], t[20];
        int i, j;
        cout<<"\nEnter "<<n<<" Names in Any Order: "<<endl;
        for(i=0; i<n; i++)
        {
            cin>>str[i];
        }
        for(i=1; i<n; i++)
        {
            for(j=1; j<n; j++)
            {
                if(strcmp(str[j-1], str[j])>0)
                {
                    strcpy(t, str[j-1]);
                    strcpy(str[j-1], str[j]);
                    strcpy(str[j], t);
                }
            }
        }
        cout<<"\nNames Sorted in Alphabetical Order:\n";
        for(i=0; i<n; i++)
        {
            cout<<str[i]<<"\n";
        }
        cout<<"\nDo you want to continue? (Y/N): ";
        cin>>choice;
    } while(choice == 'Y' || choice =='y');

    return 0;
}