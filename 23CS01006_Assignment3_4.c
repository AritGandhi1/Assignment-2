#include <stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &y1, &y2, &y3);
    if((y2-y1)/(x2-x1) == (y3-y1)/(x3-x1))
    printf("Lies on the same line");
    else
    printf("Does not lie on a straight line");
}