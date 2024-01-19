#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    n%2==0 && n>=100 && n<=200 ? printf("False"): printf("True");
}