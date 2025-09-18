#include<stdio.h>
int main()
{
    double celsius = 0;
    double farenheit = 0;
    printf("enter Celsius>>");
    scanf("%lf",&celsius);
    farenheit = (celsius*9/5)+32;
    printf("farenheit = %.2f",farenheit);
    printf("celsius = %lf",celsius);

    return 0;
}