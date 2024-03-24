// C++ program to store the monthly salary of an employee in an array. Sort array of numbers in ascending order using Quick sort and Display details of top five employees with the hightest salary 

#include <iostream>
using namespace std;

void swap(int* m, int* n) 
{ 
    int temp = *m;
    *m = *n; 
    *n = temp; 
} 
   
int partitionFunc (int arr[], int left, int right) 
{ 
    int pivot = arr[right];
    int i = (left - 1);   
   
    for (int j = left; j <= right- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[right]); 
    return (i+1); 
} 
   
//quicksort algorithm
void quickSort(int arr[], int left, int right) 
{ 
    if (left < right) 
    { 
        int pivot = partitionFunc(arr, left, right); 
        quickSort(arr, left, pivot - 1); 
        quickSort(arr, pivot + 1, right); 
    } 
} 

void display(int *arr, int n)
{
    for (int i=n-1; i>=n-5; i--)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int n;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup B-Assignment 3 (DSAL) :: C++ program to store the monthly salary of an employee in an array.\n\t\t\t       Sort array of numbers in ascending order using Quick sort and\n\t\t\t       Display details of top five employees with the hightest salary"<<endl;
    cout<<"\n\t     *** EMPLOYEE SALARY REPORT ***"<<endl;
    cout<<"\nEnter the number of Employee(s): ";
    cin>>n;

    int ar[n];
    cout<<"\nEnter Monthly Salary of Employee(s): "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Employee "<<i+1<<": ";
        cin>>ar[i];
    }

    quickSort(ar, 0, n-1);
    cout << "\nSalaries of Top 5 Employees (using Quick Sort):\n";
    display(ar, n);

    return 0;
} 
