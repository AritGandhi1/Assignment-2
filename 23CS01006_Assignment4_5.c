#include <stdio.h>
#include <math.h>
void main()
{
    int a;
    scanf("%d", &a);
    int b = a;
    int c;
    int sum = 0;
    while(b>0)
    {
        c = b%10;
        sum = sum + c*c*c;
        b = b/10;
    }
    if(a>=100 && a<=999)
    {
        if(sum == a)
        printf("Armstrong Number");
        else
        printf("Not an Armstrong Number");
    }
    else
    printf("Incorrect Input");
}