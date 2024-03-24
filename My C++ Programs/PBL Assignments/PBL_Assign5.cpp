/*
Assignment 5 (Group A) 
Create a base class called 'SHAPE' having-two data members of type double -member function get-data( )
to initialize base class data members - pure virtual member function display-area( ) to compute and display the
area of the geometrical object.
Derive two specific classes 'TRIANGLE' and 'RECTANGLE' from the base class Using these three classes, design
a program that will accept the dimension of a triangle / rectangle interactively and display the area. Implement
using C++.
*/

#include<iostream>
using namespace std;

class Shape //Base Class
{
    public:
    double height, base;

    Shape() //constructor
    {
        height=0;
        base=0;
    }

    void getData()
    {
        cout<<"Enter height: ";
        cin>>height;
        cout<<"Enter base: ";
        cin>>base;
    }

    virtual void displayArea()=0; // virtual function
};

class Triangle : public Shape
{
    public:
    void displayArea()
    {
        cout<<"Area of Triangle :: "<<(height*base)/2<<endl;
    }
};

class Rectangle : public Shape
{
    public:
    void displayArea()
    {
        cout<<"Area of Rectangle :: "<<height*base<<endl;
    }   
};

int main()
{
    int choice;
    Shape *s;
    Triangle t;
    Rectangle r;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 5 (PBL) :: Create a base class called 'SHAPE'. Derive two specific classes 'TRIANGLE' and\n\t\t\t      'RECTANGLE' from the base class Using these three classes, design a program that\n\t\t\t      will accept the dimension of a triangle / rectangle interactively and display the area."<<endl;
    
    while(1)
    {
        cout<<"\n     |- Menu -|"<<endl;
        cout<<"1) Area of Triangle"<<endl;
        cout<<"2) Area of Rectangle"<<endl;
        cout<<"3) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\n<<Area of Triangle>>"<<endl;
                t.getData();
                s=&t;
                s->displayArea();
                break;
            case 2:
                cout<<"\n<<Area of Rectangle>>"<<endl;
                r.getData();
                s=&r;
                s->displayArea();
                break;
            case 3:
                cout<<"\nThank You!"<<endl;
                exit(1);
                break;
            default:
                cout<<"\nInvalid Input! Please Try Again..."<<endl;
        }
    }
    return 0;
}
 
/*
int main()
{
    int m, n, ch, ans;
    Shape obj;
    Rectangle Area1;
    Circle Area2;
    while(1)
    {
        cout<<"Menu"<<endl<<"1.Area of Rectangle"<<endl<<"2.Area of Circle"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case1:
                Area1.read();
                ans=Area1.Rect_Area();
                cout<<ans<<endl;
                break;
            case2:
                Area2.read();
                ans=Area2.Circle_Area();
                cout<<ans<<endl;
                break;
        }
    }
} */

