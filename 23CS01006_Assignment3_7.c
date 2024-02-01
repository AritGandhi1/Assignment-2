#include <stdio.h>
void main()
{
    int m,n,k;
    scanf("%d %d %d", &m, &n, &k);
    int w = n/k;
    int final = m*w;
    if(final>=90)
    printf("Grade = Ex");
    else if(final>=80 && final<=89)
    printf("Grade = A");
    else if(final>=70 && final<=79)
    printf("Grade = B");
    else if(final>=60 && final<=69)
    printf("Grade = C");
    else if(final>=50 && final<=59)
    printf("Grade = D");
    else if(final>=40 && final<=49)
    printf("Grade = P");
    else
    printf("Fail");

}