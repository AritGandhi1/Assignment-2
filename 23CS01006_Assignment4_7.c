#include <stdio.h>
void main()
[
    int a;
    scanf("%d", &a);
    if(a<5)
    printf("Free");
    else if(a>=5 && a<=12)
    printf("Ticket Price 20");
    else if(a>12 && a<=59)
    printf("Ticket Price 50");
    else
    printf("Ticket Price 40");
]