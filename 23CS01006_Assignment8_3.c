#include <stdio.h>
void Reverse(int n,int arr1[n])
{
    for(int i = 0; i<n/2; i++)
    {
        int a = *(arr1+i);
        *(arr1+i) = *(arr1+n-i-1);
        *(arr1+n-i-1) = a;
    }
}
void main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", (arr1+i));
    }
    Reverse(n,arr1);
    for(int i = 0; i<n; i++)
    {
        printf("%d ", *(arr1+i));
    }
}