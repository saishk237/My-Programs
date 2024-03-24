#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("Income_tax.txt");
    int emp_id;
    long long annual_income;
    string name, finalstr;
    float tax;
    cin>>emp_id>>name>>annual_income;
    int i=1;
    if(emp_id>0)
    {
        try
        {
            if(annual_income<50000)
            {
                throw i;
            }
            else if(annual_income<=225000)
            {
                tax=0;    
            }
            else if(annual_income>225000 && annual_income<=425000)
            {
                tax=0.1*(annual_income-225000);
            }
            else if(annual_income>425000 && annual_income<=800000)
            {
                tax=32000+0.2*(annual_income-425000);
            }
            else if(annual_income>800000)
            {
                tax=100000+0.3*(annual_income-800000);
            }
            else
            {
                cout<<"Error!"<<endl;
            }
            cout<<name<<" "<<annual_income<<" "<<tax<<endl;
            finalstr=name;
            finalstr+=" ";
            finalstr+=to_string(annual_income);
            finalstr+=" ";
            finalstr+=to_string(tax);
            fout<<finalstr<<endl;
            fout.close();
        }
        catch(int i)
        {
            cout<<"Exception thrown: incorrect input"<<endl;
        }
    }
    else
        cout<<"Invalid Input"<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}