#include<stdio.h>
#include<stdlib.h>
#include "qna.c"

void Exit(){
    printf("\nCome Again.!");
}
void AddTask(){
    FILE *ptr;
    char task[100];
    ptr = fopen("Data.txt","a");
    printf("\nWrite your task : ");
    fgets(task,sizeof(task),stdin);
    fprintf(ptr,"%s",task);
    fclose(ptr);
    printf("\nTask added successfully.\n");
    printf("\nPress enter key to continue.");
    getchar();
    int con = ques();
    tasks(con);
}

void ReviewTask(){
    printf("\nYour tasks are :\n");
    FILE *ptr;
    ptr = fopen("Data.txt","r");
    char strings[100];
    while(fgets(strings,sizeof(strings),ptr)!=NULL){
        printf("%s",strings);
    }
    fclose(ptr);    
    printf("\nPress any enter to continue.");
    getchar();
    int con = ques();
    tasks(con);
}

void deltask(){
    FILE *ptr;
    ptr = fopen("Data.txt","w");
    fprintf(ptr, "");
    fclose(ptr);
    printf("List cleared successfully.\n");
    printf("\nPress enter key to continue.");
    getchar();
    int con = ques();
    tasks(con);
}

int main(){
    int task_num;
    printf("\n==========WELCOME TO YOUR PERSONALIZED TASK MANAGER==========\n");
    task_num = ques();
    tasks(task_num);
    return 0;
}