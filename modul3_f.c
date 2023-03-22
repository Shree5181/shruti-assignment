#include<stdio.h>
int main ()
{
    int num,temp,rev=0;

    printf("Enter a number");
    scanf("%d",&num);

    while(num != 0)
    {
        temp = num % 10;
        rev  = (rev*10)+temp;
        num = num/10;
    }
    printf("Reverse of a input number is %d",rev);

    return 0;
}