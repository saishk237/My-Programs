/* Assignment 6 (Group A)
Implement matrix class as ADT. Write a program to perform matrix addition, subtraction, and
multiplication. In read matrix function, raise an exception if any attempt is made to have rows and columns
beyond the array size. Raise an exception if any attempt is made to perform matrix operations on matrices which
does not satisfy the matrix order criteria. Implement using C++. */

#include <iostream>
using namespace std;

class Matrix
{
    private:
    int row, column, arr[10][10];
    public:
    Matrix()
    {
        row = 0;
        column = 0;
        for(int i=0; i<10; i++)
        {
            for (int j=0; j<10; j++)
            {
                arr[i][j] = 0;
            }
        }
    }
    void readDimension(int);
    void readData(int);
    void Exception1(Matrix);
    void Exception2(Matrix);
    void operator+(Matrix);
    void operator-(Matrix);
    void operator*(Matrix);
};

void Matrix::readDimension(int n=1)
{
    cout<<"<<Dimensions of Matrix "<<n<<">>"<<endl;
    cout<<"Enter No. of Rows: ";
    cin>>row;
    cout<<"Enter No. of columns: ";
    cin>>column;
    cout<<endl;
}

void Matrix::readData(int n=1)
{
    cout<<"\nEnter elements of Matrix "<<n<<": "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }
}
void Matrix::operator+(Matrix M2)
{
    Matrix M3;
    cout<<"\nAddition: "<<endl;
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            M3.arr[i][j]=arr[i][j]+M2.arr[i][j];
            cout<<M3.arr[i][j]<<"   ";
        }
        cout<<endl;
    }
}

void Matrix::operator-(Matrix M2)
{
    Matrix M3;
    cout<<"\nSubtraction: "<<endl;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            M3.arr[i][j]=arr[i][j]-M2.arr[i][j];
            cout<<M3.arr[i][j]<< "   ";
        }
        cout<<endl;
    }
}

void Matrix::operator*(Matrix M2)
{
    Matrix M3;
    cout<<"\nMultiplication: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<M2.column; j++)
        {
            M3.arr[i][j] = 0;
            for (int k=0; k<column; k++)
            {
                M3.arr[i][j]+=arr[i][k]*M2.arr[k][j];
            }
            cout<<M3.arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    Matrix M1, M2, M3;
    int choice;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 6 (PBL) :: Write a program to perform matrix addition, subtraction, and\n\t\t\t      multiplication. In read matrix function, raise an exception if\n\t\t\t      any attempt is made to have rows and columns beyond the array size.\n\t\t\t      Raise an exception if any attempt is made to perform matrix operations\n\t\t\t      on matrices which does not satisfy the matrix order criteria."<<endl;
    while(1)
    {
        cout<<"\n   |- MENU -|"<<endl;
        cout<<"1) Addition"<<endl;
        cout<<"2) Subtraction"<<endl;
        cout<<"3) Multiplication"<<endl;
        cout<<"4) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1:
                M1.readDimension();
                M2.readDimension(2);
                M1.Exception1(M2);
                M1.readData();
                M2.readData(2);
                M1+M2;
                break;
            case 2:
                M1.readDimension();
                M2.readDimension(2);
                M1.Exception1(M2);
                M1.readData();
                M2.readData(2);
                M1-M2;
                break;
            case 3:
                M1.readDimension();
                M2.readDimension(2);
                M1.Exception2(M2);
                M1.readData();
                M2.readData(2);
                M1*M2;
                break;
            case 4:
                cout<<"Thank You!"<<endl;
                exit(0);
                break;
            default:
                cout<<"Invalid Input! Please Try Again..."<<endl;
        }
    }
    return 0;
}

// Exception Handling
void Matrix::Exception1(Matrix M2)
{
    int e1, e2;
    try
    {
        if((row!=M2.row) || (column!=M2.column))
        {
            throw e1;
        }
        
    }
    catch(int e1)
    {
        cout<<"Error! For Addition/Subtraction of two matrices, No. of Rows and columns of both matrices must be equal."<<endl;
        main();
    }

    try
    {
        if(row>10 || column>10 || M2.row>10 || M2.column>10)
        {
            throw e2;
        }
    }
    catch(int e2)
    {
        cout<<"Error! Can't have No. of Rows and Columns beyond the array size."<<endl;
        main();
    }
}

void Matrix::Exception2(Matrix M2)
{
    int e1, e2;
    try
    {
        if((column != M2.row))
        {
            throw e1;
        }
        
    }
    catch(int e1)
    {
        cout<<"Error! For multiplication of two matrices, the No. of columns of first matrix must be equal to the No. of Rows of second matrix."<<endl;
        main();
    }

    try
    {
        if(row>10 || column>10 || M2.row>10 || M2.column>10)
        {
            throw e2;
        }
    }    
    catch(int e2)
    {
        cout<<"Error! Can't have No. of Rows and Columns beyond the array size.\n"<<endl;
        main();
    }
}
