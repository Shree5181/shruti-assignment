#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;
<<<<<<< HEAD
    fp = fopen("Demo.txt","r");
=======
    fp =fopen("Demo.txt","r");
>>>>>>> 1bd617f14c038ce326ee7b29a96e2025a3b7bb83
    while(ch != EOF)
    {
        ch = getc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}