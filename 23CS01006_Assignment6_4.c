#include <stdio.h>
void main()
{
    int n;
    printf("Enter the length of array 1");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    scanf("%d", &arr[i]);
    int m;
    printf("Enter the length of array 2");
    scanf("%d", &m);
    int arr2[m];
    for(int i = 0; i<m; i++)
    scanf("%d", &arr2[i]);
    int count = 0;
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(arr2[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    if(count == m)
    {
        printf("Subset");
    }
    else
    printf("Not a subset");
}