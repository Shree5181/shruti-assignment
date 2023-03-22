#include<stdio.h>
int main()
{
    int year;
    printf("\n please entar any year you wish \n");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            printf("\n %d is a leap year.",year);
            else
            printf("\n %d is not the leap year.",year);
        }
        else
        printf("\n %d is a leap year.",year);
    }
    else
    printf("\n %d is not the leap year.",year);
    return 0;
}