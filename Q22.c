#include<stdio.h>
int main()
{
    int num;
    printf("enter a number>>");
    scanf("%d",&num);
    int arr[num];
    int count = 0;
    int even[num];
    printf("enter %d numbers for elements >>",num);
    for(int i = 0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<num;i++)
    {
        if(arr[i]%2 == 0)
        {
            even[count] = arr[i];
            count++;
        }
    }
    printf("even numbers are >>\n");
    for(int i = 0;i<count;i++)
    {
        printf("%d  \n",even[i]);
    }
    int sum=0;
    
    for(int i = 0;i<count;i++)
    {
        sum+=even[i];
    }
    printf("sum of all even numbers is %d ",sum);

    return 0;
}