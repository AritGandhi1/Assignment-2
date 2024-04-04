#include <stdio.h>
typedef union Empdetails
{
    float wage;
    double salary;
}ed;
struct employee
{
    int employeeID;
    char name[50];
    ed ed1;
}e1;
int main()
{
    printf("Enter the employee id : ");
    scanf("%d", &e1.employeeID);
    fflush(stdin);
    printf("Enter employee name : ");
    gets(e1.name);
    int choice;
    printf("1.Hourly wage\n2.Fixed salary\n");
    printf("Enter your choice(number): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter hourly wage: ");
        scanf("%f", &e1.ed1.wage);
        printf("Employee ID : %d\n", e1.employeeID);
        printf("Employee Name : ");
        puts(e1.name);
        printf("Hourly wage: %f", e1.ed1.wage);
        break;
    case 2:
        printf("Enter Fixed salary : ");
        scanf("%f", &e1.ed1.salary);
        printf("Employee ID : %d\n", e1.employeeID);
        printf("Employee Name : ");
        puts(e1.name);
        printf("Fixed salary : %f", e1.ed1.salary);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}