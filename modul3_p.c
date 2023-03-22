#include<stdio.h>
int main()
{
    int num,rev = 0,rem;
    printf("Enter number: ");
    scanf("%d",&num);
    int temp = num;
    while(num != 0)
    {
        rem = num % 10;
        rev = rev*10 + rem;
        num = num / 10;
    }
    printf("sum of all digit is %d\n",rev);
    if(temp == rev)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
    return 0;
}