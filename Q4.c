#include<stdio.h>
int main()
{
    int num[10];
    int total;
    printf("enter numbers(1~10)>>");
    for(int i = 0;i<10;i++)
    {
        
        scanf("%d",&num[i]);
    }
    for(int i = 0;i<10;i++)
    {
        total += num[i];
    }
    printf("total = %d",total);
    return 0;
}