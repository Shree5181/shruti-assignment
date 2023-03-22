#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number to check if it is prime\n");
    scanf("%d",&num);
    for(i = 2;i<=num - 1;i++)
    {
        if(num%i == 0)

        {
            printf("%d is not prime.\n",num);
            break;
        }
    }
    if (i == num)
    printf("%d is prime.\n",num);
    return 0;
}