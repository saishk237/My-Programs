#include <iostream>
using namespace std;

int main()
{
    float basic, hra, ta, tax, net;
    printf("Enter your Basic Salary: "); 
    scanf("%f", &basic);
    hra = basic*0.1;
    ta = basic*0.05;
    tax = (basic+hra+ta)*0.02;
    net = (basic+hra+ta) - tax;
    printf("Net Payable Salary is: %f ", net); 
    return 0;
}