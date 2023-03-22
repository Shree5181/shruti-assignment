#include<stdio.h>
int main()
{
    int a[10],size,i,position;
    printf("\n Please Enter the size of an array \n");
    scanf("%d",&size);
    printf("\n Please Enter %d elements of an array: \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    position=a[0];
    for(i=1;i<size;i++)
    {
        if(position > a[i])
        {
            position = i;
        }
    }
    printf("\n Index position of the element = %d",position);

    return 0;
}


