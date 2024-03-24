// DSAL Assignment 1
// Consider an employee database of N employees. Make use of a hash table implementation to quickly look up the employee’s id number.

#include<bits/stdc++.h>
using namespace std;
struct emp
{
    string name;
    string tel;
    int empID;
    float sal;
    string company;
};
class hashtable
{
    private :
        emp e[10];
    public :
    hashtable()
    {
        for(int i=0;i<10;i++)
        {
            e[i].empID=-1;
        }
    }
    int hashkey(int id)
    {
        return id%10;
    }
    void collision(int id,string n, string co,float salary,string telno)
    {
        int k=hashkey(id);
        for(int i=k; i!=k-1; i++)
        {
            if(i==10)
            {
                i=0;
            }
            if(e[i].empID==-1)
            {
                e[i].empID=id;
                e[i].name=n;
                e[i].company=co;
                e[i].sal=salary;
                e[i].tel=telno;
                break;
            }
        }
        return;
    }
    void hashing(int id, string n, string co, float salary, string telno)
    {
        int k=hashkey(id);
        if(e[k].empID==-1)
        {
            e[k].empID=id;
            e[k].name=n;
            e[k].company=co;
            e[k].sal=salary;
            e[k].tel=telno;
            return;
        }
        else
        {
            collision(id, n, co, salary, telno);
            return;
        }
    }

    void setVal()
    {
        cout<<"\nEnter the Details of 5 Employees\n";
        for(int i=0; i<10; i++)
        {
            int id;
            float salary;
            string n,co,telno;
            cout<<"\nEMPLOYEE "<<i+1<<".";
            cout<<"\nEmployee ID: ";
            cin>>id;
            cout<<"Employee Name: ";
            cin>>n;
            cout<<"Name of Company: ";
            cin>>co;
            cout<<"Salary: ";
            cin>>salary;
            cout<<"Telephone Number: ";
            cin>>telno;
            hashing(id, n, co, salary, telno);
        }
    }

    void getVal()
    {
        cout<<"\n     |- Employee Details -|\n";
        for(int i=0; i<10; i++)
        {
            cout<<endl<<i+1<<". "<<" Employee ID :: ";
            cout<<e[i].empID;
            cout<<"\n    Employee Name :: ";
            cout<<e[i].name;
            cout<<"\n    Name of Company :: ";
            cout<<e[i].company;
            cout<<"\n    Salary :: ";
            cout<<e[i].sal;
            cout<<"\n    Telephone Number :: ";
            cout<<e[i].tel;
            cout<<endl;
        }
    }
};

int main()
{
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 1 (DSAL) :: Consider an employee database of N employees. Make use of a hash table\n\t\t       implementation to quickly look up the employee's id number."<<endl;
    cout<<"\n*** HASHING IMPLEMENTATION ***"<<endl;
    hashtable h;
    h.setVal();
    h.getVal();
    return 0;
}

