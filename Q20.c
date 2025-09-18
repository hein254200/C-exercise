#include<stdio.h>
int main()
{
    char arr1[100] = "hello ";
    char arr2[] = "world!";
    int i,j;
    while(arr1[i] != '\0')
    {
        i++;
    }
    while(arr2[j] != '\0')
    {
        arr1[i] = arr2[j];
        i++;
        j++;

    }
        arr1[i] = '\0';

    printf("result = %s\n",arr1);
    return 0;
}