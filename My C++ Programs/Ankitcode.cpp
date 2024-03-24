#include <stdio.h>
int main()
{
    char *p = "hello world";
    p[0] = 'H';
    printf("%s",p);
    return 0;
}