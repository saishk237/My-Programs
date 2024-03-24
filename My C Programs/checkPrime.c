#include <stdio.h>
int main()
{
    int n, flag=0;
    printf("Enter a number to check if its prime or not: ");
    scanf("%d", &n);
    if(n==0)
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            printf("\nNot a Prime Number");
            flag++;
            break;
        }
    }
    if(flag==0)
        printf("\nPrime Number");
    return 0;
}