#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    printf("Positive Number");
    else if(a==0)
    {
        printf("Zero");
    }
    else
    printf("Negative Number");
}