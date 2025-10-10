#include<stdio.h>
int gokei(int a[],int s);
int main()
{
    int arr[5]={10,20,30,40,50};
    int total;
    int size= sizeof(arr)/sizeof(arr[0]);
    total = gokei(arr,size);
    printf("sum of the element in arr is %d .\n",total);
    return 0;
}
int gokei(int a[],int s)
{
       int total=0;
       for(int i=0;i<s;i++)
    {
        total+=a[i];

    }
    return total;

}