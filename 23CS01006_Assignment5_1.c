#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a = n;
    int count = 0;
    while(a>0)
    {
        count++;
        a = a/10;
    }
    printf("%d\n", count);
    int arr[count];
    int i = 0;
    int num = 0;
    int sum = 0;
    while(n>0)
    {
        int c = 0;
        num = n%10;
        for(int j = 0; j<i; j++)
        {
            if(arr[j] == num)
            c++;
        }
        arr[i] = num;
        n = n/10;
        if(c==0)
        sum = sum+num;
        i++;
    }
    printf("%d", sum);

}