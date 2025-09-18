#include<stdio.h>
#include<string.h>
int charche(char arr[])
{
    int start = 0;
    int end = strlen(arr)-1;
    while(start<end)
    {
        if(arr[start] != arr[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main()
{
    char arr[10];
    printf("enter a string>>");
    scanf("%s",arr);
    printf("%s",arr);
    if(charche(arr))
    {
        printf("it is kaibun");
    }
    else{
        printf("it is no kaibun");
    }


    return 0;

}