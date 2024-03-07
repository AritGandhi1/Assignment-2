#include <stdio.h>
void g_avg(int n,int a[n])
{
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + a[i];
    }
    float avg = sum/n;
    for(int i = 0; i<n; i++)
    {
        if(a[i]> avg)
        printf("%d, ", a[i]);
    }
}
void main()
{
    int n;
    printf("Enter the length of the array");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    g_avg(n,a);
}