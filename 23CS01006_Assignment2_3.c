#include <stdio.h>
void main()
{
    int n;
    printf("Enter Number of Days");
    scanf("%d",&n);
    int a,b,year,month,week,day;
    a = n%365;
    year = n/365;
    b = a%30;
    month = a/30;
    day = b%7;
    week = b/7;
    printf("%d %d %d %d", year, month, week, day);
}