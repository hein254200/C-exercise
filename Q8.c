#include<stdio.h>
int main()
{
    int n;
    int odd[n];
    int odd_count = 0;
    int max_odd = 0;
    printf("enter a number for array size>>\n");
    scanf("%d",&n);
    int num[n];
    printf("enter %d numbers>>\n",n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i = 0;i<n;i++)
    {
        if(num[i]%2 != 0 )
        {
            odd[odd_count] = num[i];
            odd_count++;
        }
    }
    printf("odd numbers>>\n");
    for(int i = 0;i<odd_count;i++)
    {
        printf("%d\n",odd[i]);
    }
    for(int i = 0;i<odd_count;i++)
    {
        max_odd += odd[i];
    }
    printf("sum of odd numbers = %d",max_odd);
    return 0;
}