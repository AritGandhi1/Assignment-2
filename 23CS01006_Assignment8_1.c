#include <stdio.h>
void Circular_Shift(int *p, int *q, int *r)
{
    int a = *q;
    *q = *p;
    *p = *r;
    *r = a;
}
void main()
{
    int x,y,z;
    printf("Enter three numbers");
    scanf("%d %d %d", &x, &y, &z);
    Circular_Shift(&x, &y, &z);
    printf("%d %d %d", x,y,z);
}