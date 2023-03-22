#include<stdio.h>
int main()
{
    int a;
    char name[50];
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter name: ");
    scanf("%s",name);
    FILE *fp;
    fp = fopen("Demo.txt","w");
    fprintf(fp, "a=%d and name =%s",a,name);
    fclose(fp);
    return 0;
}
