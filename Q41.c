#include<stdio.h>
#define AMG_PEOPLE 5
struct StudentData
{
    char name[50];
    int id;
    int score;
};

int main()
{
    struct StudentData std[AMG_PEOPLE];

    double avg=0;
    int sum=0;
    for (int i = 0;i<AMG_PEOPLE;i++)
    {
        printf("enter data for student %d >>\n",i+1);
        printf("enter student name>>");
        scanf("%s",std[i].name);

        printf("enter student id>>");
        scanf("%d",&std[i].id);

        printf("enter student score>>");
        scanf("%d",&std[i].score);
        sum+=std[i].score;
        
    }
    for(int i= 0;i<AMG_PEOPLE;i++)
    {
        printf(" -----student %d ----->>\n",i+1);
        printf("student name = %s\n",std[i].name);
        printf("student id = %d\n",std[i].id);
        printf("student score = %d\n",std[i].score);
    }
    avg=(double)sum/AMG_PEOPLE;
    printf("Average score = %lf\n",avg);
    return 0;

}