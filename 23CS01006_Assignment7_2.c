#include <stdio.h>
void main()
{
    char text[100];
    char text1[100];
    gets(text);
    int i = 0;
    int c = 0;
    while(text[i] != '\0')
    {
        if((text[i] >= 65 && text[i] <=90) || (text[i] >= 97 && text[i] <=122))
        {
            printf("%c", text[i]);
        }
        i++;
    }
}