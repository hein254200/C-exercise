#include<stdio.h>
int main()
{
    char arr[5];
    printf("enter 5 characters>>");
    for(int i = 0;i<5;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(int i = 0;i<5;i++)
    {
        printf("%c\n",arr[i]);
    }

    return 0;
}