#include <stdio.h>
#include <string.h>
struct company
    {
        char rollno[20];
        char name[50];
        char address[11];
        int age;
        float avg;
    }s1[6];
void display()
{
    for(int i = 0; i<6; i++)
    printf("Roll Number: %s\n Name: %s\nAddress: %s\nAge: %d\nAverage Marks: %f\n",s1[i].rollno, s1[i].name, s1[i].address, s1[i].age, s1[i].avg);
}
void main()
{
    for(int i = 0; i<6; i++)
    {
        printf("Enter the roll number");
        fflush(stdin);
        gets(s1[i].rollno);
        printf("Enter the name");
        gets(s1[i].name);
        printf("Enter the address");
        gets(s1[i].address);
        printf("Enter the age");
        scanf("%d", &s1[i].age);
        printf("Enter the average marks");
        scanf("%f", &s1[i].avg);
    }
    display();
}