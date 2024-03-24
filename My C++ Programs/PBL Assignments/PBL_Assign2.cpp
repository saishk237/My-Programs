/* Assignment 2 (Group A)
Write a program using C++ to create a student database system containing the following information:
Name, roll number, Class, division, Date of Birth, Blood group, Contact address, telephone number.
Use Class, object, inline function. Use static variables and static functions to maintain count of the number of
students. Use constructor and destructor. */

#include <iostream>
using namespace std;
class Student
{
    static int count; // Static variable
    string name;
    int rollno;
    char division;
    int stdntclass;
    string bgrp;
    string address;
    long long phno;
    public:
    Student() // Constructor
    {
        count++;
    }
    ~Student() // Destructor
    {
        count--;
    }
    void readData();
    void printData();
    static void showCount() // Static Member Function
    {
        cout<<"Total No. of Students: " <<count<< endl;
    }
};

void Student::readData()
{
    cout<<"Name of Student: ";
    cin>>name;
    cout<<"Roll Number: ";
    cin>>rollno;
    cout<<"Division: ";
    cin>>division;
    cout<<"Class: ";
    cin>>stdntclass;
    cout<<"Blood Group: ";
    cin>>bgrp;
    cout<<"Address: ";
    cin>>address;
    cout<<"Telephone No.: ";
    cin>>phno;
}

void Student::printData()
{
    cout << "Name of Student :: "<<name<<endl;
    cout << "Roll Number :: " <<rollno<<endl;
    cout << "Division :: "<<division<<endl;
    cout << "Class :: " <<stdntclass<<endl;
    cout << "Blood group :: "<<bgrp<<endl;
    cout << "Address :: "<<address<<endl;
    cout << "Telephone No. :: "<<phno<<endl;
}

int Student::count;

int main()
{
    int i,n;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 2 (PBL) :: Write a program using C++ to create a student database system containing\n\t\t\t      the following information: Name, roll number, Class, division, DOB,\n\t\t\t      Blood group, Contact address, telephone number. Use Class, object,\n\t\t\t      inline function. Use static variables and static functions to maintain\n\t\t\t      count of the number of students. Use constructor and destructor."<<endl;
  
    cout<<"\nEnter No. of Students: ";
    cin>>n;
    Student s1[n];
    int choice;
    while(1)
    {
        cout<<"\n      |- MENU -|"<<endl;
        cout<<"1) Enter Student Record"<<endl;
        cout<<"2) Display Student Record"<<endl;
        cout<<"3) Display Count of Students"<<endl;
        cout<<"4) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                for(int i=0; i<n; i++)
                {
                    cout<<"\n<<Enter Student "<<i+1<< " Data>>"<<endl;
                    s1[i].readData();
                }
                cout<<endl;
                break;
            case 2:
                for(int i=0; i<n; i++)
                {
                    cout<<"<<Displaying Student "<<i+1<<" Data>>"<<endl;
                    s1[i].printData();
                    cout<<endl;
                }
                cout<<endl;
                break;
            case 3:
                s1[1].showCount();
                break;
            case 4:
                cout<<"Thank You!"<<endl;
                exit(0);
                break;
            default:
                cout<<"Invalid choice! Please Try Again"<<endl;
        }
    }
    return 0;
}

 