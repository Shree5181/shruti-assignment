#include<stdio.h>
int main()
{
    int num,add = 0,rem;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num != 0)
    {
        rem = num % 10;
        add = add + rem;
        num = num / 10;
    }
    printf("sum of all digit is %d",add);
    


    return 0;
}