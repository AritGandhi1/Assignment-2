#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    scanf("%d", &n);
    char arr[n];
    for(int i = 0; i<n; i++)
    scanf(" %c", &arr[i]);
    char name[100];
    scanf("%s", &name);
    int count = 0;
    int count1 = 0;
    for(int i = 0; i<strlen(name); i++)
    {
        char c = name[i];
        for(int j = 0; j<n; j++)
        {
            if(arr[j] == c)
            count++;
        }
        if(count == 0)
        {
        printf("Cant be made");
        count1++;
        break;
        }
        count = 0;
    }
    if(count1 == 0)
    printf("Can be made");

}