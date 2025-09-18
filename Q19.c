#include<stdio.h>
#include<stdlib.h>
int main()
{
    char arr[] = "hello";
    printf("%s\n",arr);
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    return 0;

}