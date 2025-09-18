#include<stdio.h>
#include<string.h>
void selectSort(int arr[],int size);

int main()
{
    int arr[5]= {5,8,4,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<5;i++)
    {
        printf("%d",arr[i]);
        if(i<4)
        {
            printf(",");
        }
    }
    printf("\n");
    selectSort(arr,n);
     for(int i = 0;i<n;i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
        {
            printf(",");
        }
    }

    return 0;
}
void selectSort(int arr[],int size)
{
    for (int i = 0;i<size -1;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}