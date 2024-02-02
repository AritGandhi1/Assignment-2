#include <stdio.h>
void main()
{
    int CS, CB;
    scanf("%d %d", &CS, &CB);
    if(CS<600)
    printf("%f",0.15*CB);
    else if(CS>=600 && CS<=750)
    printf("%f", 0.12*CB);
    else
    printf("%f", 0.1*CB);
}