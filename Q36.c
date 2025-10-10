#include<stdio.h>
void Fibonacci(int n);
int main()
{
    
    int n;
    printf("enter the number of terms in sequence>>");
    scanf("%d",&n);
    Fibonacci(n);
    return 0;
}
void Fibonacci(int n)
{
    int a =0;
    int b = 1;
    int res;
    for (int i = 0;i<n;i++)
    {
        res = a+b;
        a= b;
        b = res;
        printf("%d ",a);
    }
}
