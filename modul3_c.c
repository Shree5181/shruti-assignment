#include<stdio.h>
int main()
{
    int roll,m1,m2,m3,m4,m5,total;
    float percent;
    printf("Enter Rollno: ");
    scanf("%d",&roll);
    printf("Enter marks of 5 subject: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    percent = ((float)total / 500)*100;
    printf("roll no : %d",roll);
    printf("total : %d",total);
    printf("percent :%.2f",percent);
    if(m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33)
    {
        printf("fail");
    }
    else
    {
        if(percent > 75 && percent < 100)
        {
            printf("Distinction");
        }
        else if (percent >= 60 && percent <= 75)
        {
            printf("frist class");
        }
        else if(percent >= 50 && percent <= 60)
        {
            printf("second class");
        }
        else if(percent >= 35 && percent <= 50)
        {
            printf("pass class");
        }  
    }
    return 0;
}