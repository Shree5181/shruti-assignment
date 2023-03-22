#include<stdio.h>
int main()
{
    int k=0, l=5;
    for(int i = 1; i <= 5; i++)
    {
        {
        for(int i = 1; i <= k; i++)
    {
        printf(" ");
    }
    k++;
    for(int i = 1; i <= l; i++)
    {
        printf("* ");
    }
    l--;
    printf("\n");
    }
    }
    return 0;
}