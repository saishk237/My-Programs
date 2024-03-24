#include <iostream>
using namespace std;

void swap (int, int);

int main()
{
    int num1, num2;
    cout << "\nEnter Num1:" << endl;
    cin >> num1;
    cout << "Enter Num2:" << endl;
    cin >> num2;

    swap(num1, num2);

    //Swapped Values
    cout << "\nAfter Swapping" << endl;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
}

void swap(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}