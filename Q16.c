#include<stdio.h>
int main()
{
    int arr[10];
    int total;
    int avg;
    printf("enter 10 numbers>>");
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i = 0;i<10;i++)
    {
        total += arr[i];
    }
    printf("total = %d",total);
    
    avg = total/10;
    printf("average = %d",avg);
    
    return 0;
}