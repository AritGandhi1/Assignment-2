#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c && b+c>a && a+c>b)
    printf("Sides of a Triangle");
    else
    printf("Not sides of a triangle");
}