#include <stdio.h>
void main()
{
    int a,b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    switch(c)
    {
        case '+': printf("%d", a+b);
                  break;
        case '-': printf("%d", a-b);
                  break;
        case '*': printf("%d", a*b);
                  break;
        case '/': printf("%f", (a*1.0)/b);
                  break;
        default: printf("Incorrect Input");
                  break;
    }
}