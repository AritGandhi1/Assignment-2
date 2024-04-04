#include <stdio.h>
union Data
{
    int a;
    char c;
}data;
struct Example
{
    int a;
    char c;
}example;
void main()
{
    printf("Size of union:%d\n", sizeof(data));
    //the size of union is either equal to the maximum of the size of the element within it or rounded off to the nearest multiple of 4.
    printf("Size of struct:%d\n", sizeof(example));
    //the size of structure is the sum of all sizes of element in the structure.
}