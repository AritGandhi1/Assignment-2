#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
}d1[2];
void comp()
{
    if(d1[0].year > d1[1].year)
    printf("1");
    else if(d1[0].year < d1[1].year)
    printf("-1");
    else
    {
        if(d1[0].month > d1[1].month)
        printf("1");
        else if(d1[0].month < d1[1].month)
        printf("-1");
        else
        {
            if(d1[0].day > d1[1].day)
            printf("1");
            else if(d1[0].day < d1[1].day)
            printf("-1");
            else
            printf("0");
        }
    }
}
void main()
{
    for(int i = 0; i<2; i++)
    {
        scanf("%d", &d1[i].day);
        scanf("%d", &d1[i].month);
        scanf("%d", &d1[i].year);
    }
    comp();
}