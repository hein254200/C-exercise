#include<stdio.h>
int Max(int a,int b);
int main()
{
    int seisu1,seisu2;
    printf("enter two numbers>>");
    scanf("%d%d",&seisu1,&seisu2);
    int max = Max(seisu1,seisu2);
    printf("max = %d",max);

    return 0;
}
int Max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}