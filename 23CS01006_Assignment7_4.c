#include <stdio.h>
int max = 0;
void largest_num(int arr[], int i, int n)
{
    if(i == (n))
    {
        printf("The maximum number is %d", max);
        return;
    }
    if(max < arr[i])
    max = arr[i];
    largest_num(arr, i+1, n);
}
void main()
{
    int n;
    printf("Enter the length of the array");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elemrnts of the arrary");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest_num(arr, 0, n);
}