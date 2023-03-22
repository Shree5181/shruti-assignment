#include<stdio.h>
int main()
{
    int arr[5]={4,5,7,4,6};
    int i,j;
    int temp=5;
    for(i=1;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The array of  elements is %d",arr[i]);
    
    return 0;
}