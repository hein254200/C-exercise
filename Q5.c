#include<stdio.h>
int main()
{
    int teihen =0;
    int takasa = 0;
    int menseki = 0;
    printf("base(teihen)>>");
    scanf("%d",&teihen);
    printf("height(takasa)>>");
    scanf("%d",&takasa);
    menseki = teihen*takasa/2;
    printf("menseki(area) = %d",menseki);
    return 0;
}