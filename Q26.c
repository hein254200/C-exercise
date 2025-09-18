#include<stdio.h>
int searchBinary(int arr[],int size,int key);
int sort(int arr[],int size);
int main(){
    int arr[]={10,20,30,11,22,55,88,99,100};
    int key;
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    printf("enter would you like to search a key >>");
    scanf("%d",&key);
    int result = searchBinary(arr,size,key);
    if(result != -1)
    {
        printf("%d is found at index %d",key,result);
    }
    else
    {
        printf("element is not found.");
    }

    return 0;
}
int searchBinary(int arr[],int size,int key)
{
    int start = 0;
    int end = size -1;
    int mid;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid]==key)
            return mid;
        else if (arr[mid]<key)
        {
            start = mid+1;

        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        
        
         
    }
    return -1;
}
int sort(int arr[],int size)
{
    for(int i = 0;i<size-1;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[i] = arr[j];
                arr[j]= temp;

            }
        }
    }
}