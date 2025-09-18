#include<stdio.h>
int main()
{
    char arr[]= "hello world";
    printf("%s\n",arr);
    int length;
    while(arr[length] != '\0')
    {
        length++;
    }
    printf("length of arr is %d",length);
    return 0;
}