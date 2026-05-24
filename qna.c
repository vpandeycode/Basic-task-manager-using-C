void AddTask();
void ReviewTask();
void deltask();
void Exit();


int ques(){
    int choice;
    printf("\nWhat would you like to do ?\n");
    printf("\n1. Add a task to your list.\n");
    printf("2. Review your task list.\n");
    printf("3. Clear the List\n");
    printf("4. Exit.\n");
    printf("\nEnter you choice : ");
    scanf("%d",&choice);
    getchar();
    return choice;
}
void tasks(int choice){
    switch (choice)
    {
    case 1:
        AddTask();
        break;
    case 2:
        ReviewTask();
        break;
    case 3:
        deltask();
        break;
    case 4:
        Exit();
        break;
    default:
        printf("\nEnter a valid numerical value!!!!\n");
        ques();
        break;
    }
}