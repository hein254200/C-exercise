#include<stdio.h>
int factorial(int n);
int main()
{
    int num;

    printf("Enter a number to find its factorial>>");
    scanf("%d",&num);
    int result = factorial(num);
    printf("factorial of %d is %d",num,result);
    return 0;
}
int factorial(int n)
{
    if(n<=1)
    {
        printf("enter a positive number");
        return 1;
    }
    else{
        int res=1;
        res = n*factorial(n-1);
        return res;
    }
}