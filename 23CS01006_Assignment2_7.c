#include <stdio.h>
#include <math.h>
void main()
{
    int meal_cost,tip_percent,tax_percent;
    scanf("%d %d %d", &meal_cost, &tip_percent, &tax_percent);
    int total = meal_cost + round(meal_cost*tip_percent/100) + round(meal_cost*tax_percent/100);
    printf("%d", total);
}