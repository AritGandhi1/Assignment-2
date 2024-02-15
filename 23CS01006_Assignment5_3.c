#include <stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    int arr[4];
    int i = 0;
    int num = 0;
    while(a>0)
    {
        num = a%10;
        arr[i] = num;
        a = a/10;
        i++;
    }
    for(int i = 0;i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            if(j == i)
            continue;
            for(int k = 0; k<4; k++)
            {
                if(k == i || k == j)
                continue;
                for(int l = 0; l<4; l++)
                {
                    if(l == i || l == j || l == k)
                    continue;
                    printf("%d\n", arr[i]*1000 + arr[j]*100 + arr[k]*10 +arr[l]);
                }
            }
        }
    }
}