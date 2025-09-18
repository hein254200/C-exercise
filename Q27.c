//素数（そすう）＝primenumber
//1ကလွဲပြီးဘာနဲ့မှစားလို့မပြတ်တဲ့numbers.

#include<stdio.h>
int Prime(int n);
int main()
{
    printf("enter a number >>");
    int num;
    scanf("%d",&num);
    if(Prime(num)==1)
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
        printf("%d is not prime number\n",num);
    }
    return 0;
}
int Prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
     return 1;

}
