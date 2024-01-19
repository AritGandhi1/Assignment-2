#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a = 1;
    if((n&a)%2 == 0)
    {
        printf("Even");
    }
    else
    printf("Odd");
}