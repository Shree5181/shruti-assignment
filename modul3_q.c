#include<stdio.h>
struct student
{
    int number;
    char name[50];
    char address[50];
    int age;

};
int main()
{
    struct student s[5];
    for(int i = 0;i < 5;i++)
    {
        printf("Enter number: ");
        scanf("%d",&s[i].number);
        printf("Enter name: ");
        scanf(" ");
        gets(s[i].name);
        printf("Enter address: ");
        gets(s[i].address);
        printf("Enter age: ");
        scanf("%d",&s[i].age);
    }
    printf("\n------------all data--------------\n");
    
    for(int i = 0;i < 5;i++)
    {
        printf("number=%d\nname=%s\naddress=%s\nage=%d\n",s[i].number,s[i].name,s[i].address,s[i].age);
    }
    return 0;
    
}