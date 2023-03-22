#include<stdio.h>
int main()
{
    int number,i = 0,next,first_value = 0,second_value = 1;
    printf("\nPlease Enter the range number :");
    scanf("%d",&number);
    while(i < number) 
    {
        if(i<=1)
        {
            next = i;
        }
        else
        {
            next = first_value + second_value ;
            first_value = second_value;
            second_value = next;
        }
        printf("%d \t",next);
        i++;

    }
    
     return 0;
}