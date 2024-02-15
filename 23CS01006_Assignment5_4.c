#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    for(int i = 5; i>=0; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            printf(" ");
        }
        for(int j = 1; j<6-i; j++)
        printf("* ");
        printf("\n");
    }
}