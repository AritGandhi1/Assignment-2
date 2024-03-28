#include <stdio.h>
struct CourseRecord
{
    char F_Name[20];
    char L_Name[20];
    char Roll[20];
    char Dept[20];
    char Course_Code[20];
    float marks[3];
}student;
float avg_marks()
{
    float sum = 0;
    for(int i = 0; i<3; i++)
    sum = sum + student.marks[i];
    return sum/3;
}
int pass(float avg)
{
    if(avg>35)
    return 1;
    else
    return 0;
}
void main()
{
    printf("Enter the details and marks");
    scanf("%s %s %s %s", &student.F_Name, &student.L_Name, &student.Roll, &student.Dept);
    for(int i = 0; i<3; i++)
    {
        scanf("%f", &student.marks[i]);
    }
    float avg = avg_marks();
    int a = pass(avg);
    if(a == 1)
    printf("Pass");
    else
    printf("Fail");
}
