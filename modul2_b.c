#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    float si,ci;
    printf("enter principal,rate,time:\n");
    scanf("%f %f %f",&p,&r,&t);
    si=p*r*t/100;
    float temp=1+(r/100);
    ci=p*(pow(temp,t));
    printf("simpal interest %f compound interest %f",si,ci);
    return 0;
}

