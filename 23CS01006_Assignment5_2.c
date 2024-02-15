#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int count = 0;
    while(a>=b)
    {
        a = a-b;
        count++;
    }
    printf("%d %d", count, a);
}