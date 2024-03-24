/* C++ program to store the monthly salary of an employee in an array.
Sort array of numbers in ascending order using Merge sort and
Display details of top five employees with the highest salary */

#include <iostream>
using namespace std;

int flag[10];

void merge(int *arr, int left, int mid, int right)
{
    int i, j, k, n_left, n_right;

    n_left = mid - left + 1;
    n_right = right - mid;
    int leftArr[n_left], rightArr[n_right];
    
    for (i = 0; i < n_left; i++)
    {
        leftArr[i] = arr[left + i];
    }
    for (j = 0; j < n_right; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while (i < n_left && j < n_right)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i<n_left)
    {
        arr[k]=leftArr[i];
        i++;
        k++;
    }
    while (j < n_right)
    {
        arr[k]=rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int left, int right)
{
    int mid;
    if(left<right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void display(int *arr, int n)
{
    for (int i=n-1; i>=n-5; i--)
    {
        cout<<arr[i]<<" " << endl;
    }
}

int main()
{
    int n;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 9 (DSAL) :: C++ program to store the monthly salary of an employee in an array.\n\t\t       Sort array of numbers in ascending order using Merge sort and \n\t\t       Display details of top five employees with the highest salary"<<endl;
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

    mergeSort(ar, 0, n-1);
    cout << "\nSalaries of Top 5 Employees (using Merge Sort):\n";
    display(ar, n);
} 
