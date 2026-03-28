#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *person[3];
    char buffer[100];
    for(int i =0;i<3;i++)
    {
        printf("enter name %d: ",i+1);
        fgets(buffer,sizeof(buffer),stdin);
        buffer[strcspn(buffer, "\n")]='\0';
        int length = strlen(buffer);
        person[i]= (char*)malloc((length+1)*sizeof(char));
        strcpy(person[i],buffer);

    }
    printf("entered names >>\n");
    for(int i=0;i<3;i++)
    {
        printf("%s\n",person[i]);
        free(person[i]);
    }
    return 0;
}