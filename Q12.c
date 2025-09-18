#include<stdio.h>
int main()
{
    int mul;
    printf("enter a number>>");
    scanf("%d",&mul);
    for(int i = 1;i<=10;i++)
    {
        printf("%d*%d = %d\n",mul,i,mul*i);
    }
    return 0;
}