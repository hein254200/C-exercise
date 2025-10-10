#include<stdio.h>
int main()
{
    int A_matrix[10][10];
    int B_matrix[10][10];
    int row,colom;
    printf("enter row and colom>>");
    scanf("%d %d",&row,&colom);
    printf("enter element of A matrix>>\n");
    for(int i=0;i<row;i++)
    {
        for(int j =0;j<colom;j++)
        {
            scanf("%d",&A_matrix[i][j]);
        }
    }
    printf("entered elements are>>\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colom;j++)
        {
            printf("%d ",A_matrix[i][j]);
        }
        printf("\n");
    }
    //to transport matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colom;j++)
        {
            B_matrix[j][i]=A_matrix[i][j];
        }
    }
    printf("after transported matrix is>>\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colom;j++)
        {
            printf("%d ",B_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}