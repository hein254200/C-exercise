#include<stdio.h>
int main()
{
    int num = 0;
    printf("enter a number>>");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive\n",num);
    }
    else if(num<0)
    {
        printf("%d is negative\n",num);
    }
    else{
        printf("%d is zero\n",num);
    }
    return 0;
}