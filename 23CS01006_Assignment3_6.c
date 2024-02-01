#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a = n*n;
    int num = 0;
    int count  = 0;
    int b = a;
    int c = 10;
    int d = 0;
    int e = 0;
    while(1)
    {
        
        if(b==0)
        break;
        count++;
        b = b/10;
        
        
    }
    //printf("%d", count);
    if(count%2 == 0)
    {
    for(int i = 1; i<(count/2); i++)
    c = c*10;
    }
    else
    {
        for(int i = 1; i<(count/2 + 1); i++)
        c = c*10;
    }
    num = a%c;
    b = a/c;
    d = a%(c*10);
    e = a/(c*10);
    //num = a%(int)(pow(10.0,(double)(ceil(count/2))));
    //b = a/(int)(pow(10.0,(double)(ceil(count/2))));
    //printf("%d", num);
    if(num+b == n || d+e == n)
    printf("Kaprekar Number");
    else
    printf("Not a Kaprekar Number");
}