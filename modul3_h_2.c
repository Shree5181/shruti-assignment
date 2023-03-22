#include<stdio.h>
int main()
{
    int k = 4,l = 1,m = 1,n = 4,z=1;
    for(int i =1; i <= 4; i++)
    {
        if(i <= 5)
        {
        for(int i =1;i <= k; i++)
        {
            printf(" ");
        }
        k--;
        for(int i = 1; i <= l; i++)
        {
            printf("%d ",z);
            z++;
        }
        l++;
        }
        else
        {
        for(int i = 1; i <= m; i++)
        {
            printf(" ");
        }
        m++;
        for(int i = 1;i <= n; i++)
        {
            printf("* ");
        }
        n--;
        }
        printf("\n");
    }
    return 0;
}