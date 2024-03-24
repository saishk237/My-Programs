/*
Assignment 7 (Group A)
Write a class template to represent a generic vector. Include member functions to perform
the following tasks:
a. To create the vector.
b. To modify the value of a given element.
c. To multiply the vector by a scalar value.
d. To display the vector in the form (10, 20, 30....).
*/

#include<iostream>
using namespace std;

template <class T>
class vector
{
    T *v;
    int size;

    public:
    vector(int m) // parameterized constructor
    {
        v=new T[size=m];
        for(int i=0;i<size;i++)
        v[i]=0;
    }

    void create()
    {
        cout<<"\n<<Creating Vector>>"<<endl;
        for(int i=0; i<size; i++)
        {
            cout<<"v["<<i<<"] = ";
            cin>>v[i];
        }
    }

    void modify()
    {
        cout<<"<<Modifying Vector value at given position>>"<<endl;
        int pos;
        cout<<"Enter position to make change: ";
        cin>>pos;
        cout<<"Enter new Value: ";
        cin>>v[pos];
    }

    void multiply()
    {
        cout<<"<<Multiplying Vector with Scalar>>"<<endl;
        T sc;
        cout<<"Enter Scaler No. to multiply with Vector: ";
        cin>>sc;
        for(int i=0; i<size; i++)
        {
            v[i]=v[i]*sc;
        }
    }

    void display()
    {
        int i;
        cout<<"<<Displaying Vector>>"<<endl;
        cout<<"(";
        for(i=0; i<size-1; i++)
        {
            cout<<v[i]<<",";
        }
        cout<<v[i]<<")\n";
    }
};

int main()
{
    int size, choice;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 7 (PBL) :: Write a class template to represent a generic vector.\n\t\t\t      Include member functions to perform the following tasks:\n\t\t\t      a. To create the vector.\n\t\t\t      b. To modify the value of a given element.\n\t\t\t      c. To multiply the vector by a scalar value.\n\t\t\t      d. To display the vector in the form (10, 20, 30....)."<<endl;
    cout<<"\nEnter size of vector: ";
    cin>>size;
    vector<int> vect(size); // creates integer vector
    vect.create();
    
    while(1)
    {
        cout<<"\n      |- MENU -|"<<endl;
        cout<<"1) Modify value of given element"<<endl;
        cout<<"2) Multiply Vector by Scalar"<<endl;
        cout<<"3) Display vector in the form (10,20,30...)"<<endl;
        cout<<"4) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                vect.modify();
                break;
            case 2:
                vect.multiply();
                break;
            case 3:
                vect.display();
                break;
            case 4:
                cout<<"Thank You!";
                exit(1);
                break;
            default:
                cout<<"Invalid Input! Please Try Again..."<<endl;
        }
    }
    return 0;
}
