#include <stdio.h>
#include <string.h>
void main()
{
    struct company
    {
        char name[20];
        char address[50];
        char phone_no[11];
        int noOfEmployees;
    }s1;
    printf("Enter the name");
    gets(s1.name);
    printf("Enter the address");
    gets(s1.address);
    printf("Enter the phone_no");
    gets(s1.phone_no);
    printf("Enter the no of employees");
    scanf("%d", &s1.noOfEmployees);
    printf("Name: %s\nAddress: %s\nPhone Number: %s\nNumber of employees: %d\n", s1.name, s1.address, s1.phone_no, s1.noOfEmployees);
}