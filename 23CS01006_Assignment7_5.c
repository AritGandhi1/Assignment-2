#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20];
    printf("Enter the string");
    gets(str1);
    int n = strlen(str1);
    char str2[20];
    strcpy(str2, str1);
    if(strcmp(strrev(str1), str2) == 0)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}