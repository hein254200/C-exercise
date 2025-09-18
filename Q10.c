#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter 5 numbers>>");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<5;i++)
    {
        printf("element of array = %d",arr[i]);
        printf("\n");
    }
    return 0;
}