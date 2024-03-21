#include <stdio.h>
void MoreThanOnce(int n,int arr1[n+1])
{
    int x = 0;
    for(int i = 0; i<n+1; i++)
    x = x^*(arr1+i);
    for(int i = 1; i<n+1; i++)
    x = x^i;
    printf("%d", x);
}
void main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i<(n+1); i++)
    {
        scanf("%d", (arr1+i));
    }
    MoreThanOnce(n,arr1);
}