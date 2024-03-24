/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, sum=0, temp=0;
    scanf("%d", &n);
    int arr[n];
    if(n>=1 && n<=1000000000)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d ", &arr[i]);
            sum+=arr[i];
            if(arr[i]<1 || arr[i]>1000000000)
                goto line25;
        }

        printf("%d", sum);
        temp = 1;
    }
    if(temp!=1)
    {
        line25:
        printf("\nInvalid Input");
    }
    
    // Enter your code here. Read input from STDIN. Print output to STDOUT   
    return 0;
}
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int arr[100000], temp=0;
    int n, sum = 0;
    cin >> n;
    if(n>=1 && n<=1000000000)
    {
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]<1 || arr[i]>1000000000)
                goto line25;
        }
        for(int i=0; i<n; i++)
        {
            sum = sum + arr[i];
        }
        cout << sum;
        temp = 1;
    }
    if(temp!=1)
    {
        line25:
        printf("\nInvalid Input");
    }
    return 0;
}