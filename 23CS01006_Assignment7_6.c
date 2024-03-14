#include <stdio.h>
#include <string.h>
void main()
{
    char str1[40];
    gets(str1);
    char str2[40];
    gets(str2);
    if(strstr(str1, str2) == NULL)
    printf("Not present");
    else
    printf("Present");
}