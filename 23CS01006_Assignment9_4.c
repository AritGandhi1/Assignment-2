#include <stdio.h>
struct address
{
    char street[20];
    char city[20];
    char zip[20];
};
struct person
{
    char name[20];
    struct address add1;
}p1;
void main()
{
    gets(p1.name);
    gets(p1.add1.street);
    gets(p1.add1.city);
    gets(p1.add1.zip);
    printf("Name: %s\nAdrress: %s,%s,%s",p1.name, p1.add1.street,p1.add1.city,p1.add1.zip);
}