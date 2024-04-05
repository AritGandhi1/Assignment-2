#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;
void push(char data)
{
    if(top == 99)
    {
        printf("Overflow");
        return;
    }
    top++;
    stack[top] = data;
}
char pop()
{
    if(top == -1)
    {
        printf("Underflow");
        return;
    }
    return stack[top];
    top--;
}
void main()
{
    int n;
    printf("Enter the length of the string ");
    scanf("%d", &n);
    char text[n];
    scanf("%s", text);
    for(int i = 0; i<n; i++)
    push(text[i]);
    for(int i = 0; i<n; i++)
    {
        char c = pop();
        printf("%c", c);
    }
}