#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int n = a%2;
    switch(n)
    {
        case 0: printf("Even");
                break;
        case 1: printf("Odd");
                break;
        case -1: printf("Odd");
                break;
    }
}