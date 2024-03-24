#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    for(int i=a; i<=b; i++)
    {
        int j;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
            printf("\n%d",i);
    }
    return 0;
}