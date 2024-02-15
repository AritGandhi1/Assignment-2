#include <stdio.h>
void main()
{
    int sum = 0;    
    //bool c = true;
    while(1)
    {
        int n;
        scanf("%d", &n);
        char c;
        scanf(" %c", &c);
        
        if(c== 'Y' || c== 'y')
        {
            if(n%2 == 0)
            sum = sum+n;
            else
            continue;
        }
        else if(c == 'N' || c == 'n')
        {
            if(n%2 == 0)
            sum = sum + n;
            printf("%d", sum);
            break;
        }
        else{
            printf("Wrong Input");
        }
    }
}