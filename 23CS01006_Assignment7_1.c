#include <stdio.h>
void main()
{
    char text[100];
    gets(text);
    char c;
    scanf(" %c", &c);
    int i = 0;
    int count = 0;
    while(text[i] != '\0')
    {
        if(text[i] == c)
        count++;
        i++;
    }
    printf("%d", count);
}