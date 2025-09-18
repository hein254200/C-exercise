#include<stdio.h>
int main()
{
    int num;
    int factorial =1;
    printf("enter a number>>");
    scanf("%d",&num);
    
    
        if(num<0)
        {
            printf("negative number is no avable!\n");
        }
        else if (num==0)
        {
            printf("0 of factorial is 1.\n");
        }
        else
        for(int i=1;i<=num;i++)
        {
        factorial = factorial*i;
        printf("%d\n",factorial);
        }
        
    
    
    return 0;
}