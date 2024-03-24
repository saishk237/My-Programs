/* 
Assignment 4 (Group A)
Implement a class Complex which represents the Complex Number data type. Implement the following operations:
1. A constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers. To do this, you will need to decide what you want
your input and output format to look like.
*/

#include <iostream>
using namespace std;

class complex
{
    float r,i;
    public:
    complex(); //Constructor Declared
    void inputData();
    complex operator+(complex); //Operator Overloading
    friend complex operator*(complex,complex); //friend function
    
    void displayData();
};

complex::complex() //Constructor Defined
{
    r=0;
    i=0;
}

void complex::inputData()
{
    cout<<"Real part: ";
    cin>>r;
    cout<<"Imaginary part: ";
    cin>>i;
}

complex complex::operator+(complex c)
{
    complex flag;
    flag.r=r+c.r;
    flag.i=i+c.i;
    return flag;
}

complex operator*(complex c1,complex c2)
{
    complex val;
    val.r=(c1.r*c2.r)-(c1.i*c2.i);
    val.i=(c1.r*c2.i)+(c2.r*c1.i);
    return val;
}

void complex::displayData()
{
    cout<<r<<" + "<<i<<"i"<<endl;
}

int main()
{
    complex c1,c2,c3;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 4 (PBL) :: Implement a class Complex which represents the Complex Number data type.\n\t\t\t      Implement the following operations:\n\t\t\t      1. A constructor (including a default constructor which creates the complex number 0+0i).\n\t\t\t      2. Overloaded operator+ to add two complex numbers.\n\t\t\t      3. Overloaded operator* to multiply two complex numbers.\n\t\t\t      4. Overloaded << and >> to print and read Complex Numbers.\n\t\t\t      To do this, you will need to decide what you want your input and output format to look like."<<endl;
    cout<<"\n<<Enter First Complex Number>>"<<endl;
    c1.inputData();
    cout<<"\n<<Enter Second Complex Number>>"<<endl;
    c2.inputData();
    cout<<"\n     *** RESULT ***"<<endl;
    cout<<"Complex Number 1 :: ";
    c1.displayData();
    cout<<"Complex Number 2 :: ";
    c2.displayData();

    c3=c1+c2; // Operator overloading function called
    cout<<"Addition :: ";
    c3.displayData();

    c3=c1*c2; // Operator overloading function called
    cout<<"Multiplication :: ";
    c3.displayData();
    cout<<endl;

    return 0;
}

