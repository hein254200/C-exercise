#include<stdio.h>
int main()
{
    int matrix[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int total=0;

    printf("matrix  arr of element \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%2d",matrix[i][j]);
            
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            total += matrix[i][j];
        }
       
    }
    printf("total = %d",total);

    return 0;

}