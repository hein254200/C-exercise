#include<stdio.h>
int main()
{
    int num[5];
    int max;
    printf("enter 5 numbers>>");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(int i = 0;i<5;i++)
    {
        
        if (num[i]>max)
        {
           max = num[i];

        }
        
        
    }
    printf("max number = %d",max);
    return 0;
}