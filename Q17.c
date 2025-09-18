#include<stdio.h>
int Max(int arr[],int size);
int Min(int arr[],int size);
int main()
{
    int num;
   
    printf("enter a number for arr size>>");
    scanf("%d",&num);
    int arr[num];
    printf("enter an elements for arr>>");
    for (int i = 0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("entered the elements are>>");
    for (int i = 0;i<num;i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
    int max = Max(arr,num);
    printf("maximum number of arr is %d.\n",max);
    int min = Min(arr,num);
    printf("minimum number of arr is %d.\n",min);

    return 0;
}
int Max(int arr[],int size)
{
    int max = arr[0];
    for(int i = 0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int Min(int arr[],int size)
{
    int min = arr[0];
    for(int i = 0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}
