#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    int t;
    char ch;
    scanf("%d", &t);
    int n[100];
    if(t>=0 && t<=2147483647)
    {
        for(int i=0;i<t;i++)
        {
            scanf("%c", &ch);
            n[i] = ch;
        }
        for(int j=0;j<t;j++)
        {
            if(n[j]>=65 && n[j]<=90)
            {
               printf("%c\n",n[j]+32);
            }
            else if(n[j]>=97 && n[j]<=122)
            {
               printf("%c\n",n[j]-32);
            }
            else if(n[j]>=48 && n[j]<=57)
            {
               printf("Number\n"); 
            }
            else
            {
                printf("Invalid Input\n");
            }
        }
    }
    else
        printf("Invalid Input");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
