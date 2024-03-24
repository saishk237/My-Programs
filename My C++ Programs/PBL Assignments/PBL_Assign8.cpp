/* Assignment 8 (Group A) 
Write a program to maintain an employee database in binary file with employee information such as empId,
name, age, department, post and salary. Write function for adding new record, displaying all records, searching for
a particular employee, updating employee salary and post. */

#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

class Employee
{
    private:
    int empID, empAge;
    char empName[25], empDept[25];
    float empSalary;

    public:
    void read();
    void display();

    int getEmpCode()
    {
        return empID;
    }

    int getSalary()
    {
        return empSalary;
    }

    void updateSalary(float s)
    {
        empSalary=s;
    }
};

void Employee::read()
{
    cout<<"Enter Employee ID: ";
    cin>>empID;
    cout<<"Enter Employee Name: ";
    cin.ignore(1);
    cin.getline(empName,25);
    cout<<"Enter Employee Age: ";
    cin>>empAge;
    cout<<"Enter Employee Department: ";
    cin.ignore(1);
    cin.getline(empDept,25);
    cout<<"Enter Salary: ";
    cin>>empSalary;
}
 
void Employee::display()
{
    cout<<"Employee ID :: "<<empID<<endl;
    cout<<"Employee Name :: "<<empName<<endl;
    cout<<"Employee Age :: "<<empAge<<endl;
    cout<<"Employee Department :: "<<empDept<<endl;
    cout<<"Employee Salary :: "<<empSalary<<endl;
    cout<<endl;
}

fstream file;
 
void deleteExistingFile()
{
    remove("Employee.dat");
}

void appendToFile()
{
    Employee x;
    x.read();
     
    file.open("Employee.dat", ios::binary|ios::app);
    if(!file)
    {
        cout<<"Error in Creating File!\n";
        return;
    }
    file.write((char*)&x,sizeof(x));
    file.close();
    cout<<"Record added sucessfully!\n";
}
 
void displayAll()
{
    Employee x;
     
    file.open("Employee.dat", ios::binary|ios::in);
    if(!file)
    {
        cout<<"Error in Opening File!\n";
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
            x.display();
    }
    file.close();
}
 
void searchForRecord()
{
    Employee x;
    int c;
    int isFound=0;
 
    cout<<"Enter Employee ID: ";
    cin>>c;
 
    file.open("Employee.dat", ios::binary|ios::in);
    if(!file)
    {
        cout<<"Error in Opening File!\n";
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getEmpCode()==c)
            {
                cout<<"Record Found!\n";
                x.display();
                isFound=1;
                break;
            }
        }
    }
    if(isFound==0)
    {
        cout<<"Record Not Found!\n";
    }
    file.close();
}

void updateSalary()
{
    Employee x;
    int c;
    int isFound=0;
    float sal;
 
    cout<<"Enter Employee ID: ";
    cin>>c; 
    file.open("Employee.dat", ios::binary|ios::in);
    if(!file)
    {
        cout<<"Error in Opening File!\n";
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getEmpCode()==c)
            {
                cout<<"Enter New Salary: ";
                cin>>sal;
                x.updateSalary(sal);
                isFound=1;
                break;
            }
        }
    }
    if(isFound==0)
    {
        cout<<"Record Not found!\n";
    }
    file.close();
    cout<<"Salary updated successfully."<<endl;
}
 
int main()
{
    deleteExistingFile();
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 8 (PBL) :: Write a program to maintain an employee database in binary file with\n\t\t\t      employee information such as empId, name, age, department, post and\n\t\t\t      salary. Write function for adding new record, displaying all records,\n\t\t\t      searching for a particular employee, updating employee salary and post."<<endl;
    
    while(1)
    {
        int choice;
        cout<<"\n\t|- MENU -|"<<endl;
        cout<<"1) Add New Employee Record"<<endl;
        cout<<"2) Display All Records"<<endl;
        cout<<"3) Search Employee Details"<<endl;
        cout<<"4) Update Salary"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        cout<<endl;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                appendToFile();
                break;
            case 2 :
                displayAll();
                break;
            case 3:
                searchForRecord();
                break;
            case 4:
                updateSalary();
                break;
            case 5:
                cout<<"Thank You!"<<endl;
                exit(0);
                break;
            default :
                cout<<"Invalid Input! Please Try Again...\n"<<endl;
        }
    }
    return 0;
}