#include<stdio.h>
void sord(int arr[],int size);
int main()
{
    int arr[5]={8,5,7,9,1};
    printf("you entered numbers are >>");
    for(int i = 0;i<5;i++)
    {
        printf("%d",arr[i]);
        if(i<4){
            printf(",");
        }
    }
    int leng= sizeof(arr)/sizeof(arr[0]);
    sord(arr,leng);
    
    printf("\norder numbers are >>");
    for(int i = 0;i<leng;i++)
    {
        printf("%d",arr[i]);
        if(i<4){
            printf(",");
        }
    }
    return 0;
}
void sord(int arr[],int size)
{
    for(int i = 0;i<size-1;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;


            }
        }
    }
    
}