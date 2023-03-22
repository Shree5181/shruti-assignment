#include<stdio.h>
int main()
{
   int choice; 
   printf("1. for are of  triangle");
   printf("2. for area of  circle");
   printf("3. for are of ractangle");
   printf("Enter your choice:\n");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
    {
        int b,h,a;
        printf("Enter base and height:\n");
        scanf("%d %d ",&b,&h);
        a=(b*h)/2;
        printf(" the area of triangle is %d",a);
        break;
    }
    case 2:
    {
        float r,a;
        printf("Enter readius\n");
        scanf("%g",&r);
        a = 3.14594*r*r;
         printf("\n area of circle=%g",a);
        break;
    }
    case 3:
    {
        int l,b,a;
         printf("Enter lenght and breadth:\n");
        scanf("%d%d",&l,&b);
        a = l*b;
        printf("area of rectangle: %d\n",a);
        break;
    }
    default:
    {
        printf("wrong choice");
        break;
    }
   }
   return 0;
}