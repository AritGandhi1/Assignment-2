#include <stdio.h>
typedef enum PayType
{
    Hourly = 1,
    Salary = 2
} pay;
typedef union EmpDetails
{
    float hourly_wage;
    double fixed;
    pay p2;
} ed;
struct employee
{
    int employeeID;
    char name[50];
    ed emp1;
    pay p1;
} e1;
void main()
{
    printf("Enter the employee id : ");
    scanf("%d", &e1.employeeID);
    fflush(stdin);
    printf("Enter employee name : ");
    gets(e1.name);
    printf("1.Hourly wage\n2.Fixed Salary\n");
    printf("Enter choice: ");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case Hourly:
        e1.p1 = Hourly;
        e1.emp1.p2 = Hourly;
        printf("Enter hourly wage: ");
        scanf("%f", &e1.emp1.hourly_wage);
        break;
    case Salary:
        e1.p1 = Salary;
        e1.emp1.p2 = Salary;
        printf("Enter fixed Salary: ");
        scanf("%lf", &e1.emp1.fixed);
        break;
    default:
        printf("Wrong choice\n");
    }
    if (e1.p1 == Hourly)
    {
        printf("Employee ID: %d\n", e1.employeeID);
        printf("Employee name: %s\n", e1.name);
        printf("Employee hourly wage: %f", e1.emp1.hourly_wage);
    }
    if (e1.p1 == Salary)
    {
        printf("Employee ID: %d\n", e1.employeeID);
        printf("Employee name: %s\n", e1.name);
        printf("Employee fixed Salary: %lf", e1.emp1.fixed);
    }
}