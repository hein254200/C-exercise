#include<stdio.h>
#define NSIZE 100


struct StudentData
{
	char name[NSIZE];
	int id;
	int age;
};
void show(struct StudentData *st);
int main()
{
	struct StudentData st;
	printf("enter student name>> ");
	scanf_s("%s", st.name, NSIZE);
	printf("\nenter student id >> ");
	scanf_s("%d", &st.id);
	printf("\nenter student age >> ");
	scanf_s("%d", &st.age);
	show(&st);
	
	return 0;
}
void show(struct StudentData *st)
{
	printf("student name is %s", st->name);
	printf("\nstudent id is %d", st->id);
	printf("\nstudent name is %d", st->age);
}