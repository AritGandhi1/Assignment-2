#include <stdio.h>
union Data
{
    int a;
    float b;
    char c;
}data;
void main()
{
    // you can assign value to only one variable at a time
    data.a = 5;
    printf("%d\n", data.a);
    data.b = 5.0;
    printf("%f\n", data.b);
    data.c = 'a';
    printf("%c\n", data.c);
}