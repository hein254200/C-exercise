#include<stdio.h>
int kaijyou(int a);
int main()
{
    int a;
    int result;
    printf("enter a numbers>>");
    scanf("%d",&a);
    result = kaijyou(a);
    printf("power of %d is %d",a,result);

    return 0;
}
int kaijyou(int a)
{
    int result=1;
    for(int i = 1;i<=a;i++)
    {
        result *= i;
    }
    return result;
}