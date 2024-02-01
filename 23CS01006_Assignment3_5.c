#include <stdio.h>
void main()
{
    int days;
    scanf("%d", &days);
    if(days>30)
    printf("Your Membership has been cancelled");
    else if(days<=5)
    printf("%d", days*1);
    else if(days>5 && days<=10)
    printf("%d", 5*1 + (days-5)*2);
    else if(days>10 && days<=30)
    printf("%d", 5*1 + 5*2 + (days-10)*5);
}