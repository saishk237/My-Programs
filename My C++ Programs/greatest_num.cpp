#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, num3, greatest;
    cout << "\nEnter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    cout << "Enter Num3: " << endl;
    cin >> num3;

    greatest = num1 > num2 ? ( num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    cout << "\nGreatest Number = " << greatest << endl;
    return 0;
}