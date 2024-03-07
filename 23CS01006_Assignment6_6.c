#include <stdio.h>
void main()
{
    int m;
    printf("Enter the nuber of cities");
    scanf("%d", &m);
    int a[m][7];
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<7; j++)
        {
            printf("Enter temperature of city %d ", i);
            scanf("%d", &a[i][j]);
        }
    }

    float b[m];
    for(int i = 0; i<m; i++)
    {
        int sum = 0;
        for(int j = 0; j<7; j++)
        {
            sum = sum + a[i][j];
        }
        b[i] = (float)sum/7.0;
    }
    for(int i = 0; i<m; i++)
    printf("%0.2f ", b[i]);
}