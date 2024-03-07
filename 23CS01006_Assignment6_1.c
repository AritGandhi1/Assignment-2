#include <stdio.h>
void prime(int ll, int ul)
{
    
    for(int i = ll; i<=ul; i++)
    {
        if(i==1 && i == 0)
        {
            continue;
        }
        int count = 0;
        for(int j = 2; j<i; j++)
        {
            if(i%j == 0)
            {
                count = 1;
                break;
            }
        }
        if(count == 0)
        printf("%d ", i);
    }
}
void main()
{
    int ll, ul;
    scanf("%d %d", &ll, &ul);
    prime(ll,ul);
}