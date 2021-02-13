#include<stdio.h>
#include "after_choice.h"
#include "instructions.h"
#include "category.h"
#include "global_chit_chats.h"
int main()
{
    printf("phhh\n");
    char name[31],command;
    int n;
    printf("\e[1;1H\e[2J");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t             C PROGRAM QUIZ GAME               \n");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t             Enter your name:");
    fgets(name,31,stdin);
    printf("\e[1;1H\e[2J");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t             C PROGRAM QUIZ GAME               \n");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t                  HI %s \n", name);
    printf("\t\t\t              WELCOME TO THE GAME               \n");
    printf("\t\t\t________________________________________________\n");
    printf("\t\t\t________________________________________________\n");
    printf("\t\t\t              TEST YOUR KNOWLEDGE!!!            \n");
    printf("\t\t\t________________________________________________\n");
    printf("\t\t\t________________________________________________\n");
    after_name();
    for(int i=0;i<1000;i++)
    {
        printf("\t\t\tchoice-->");
        scanf(" %c", &command);

        if(command == 'i')
        {
            printf("\e[1;1H\e[2J");
            instructions();
        }
        if(command == 's')
        {
            printf("\e[1;1H\e[2J");
            category();
            //i = 1000;
        }
        if(command == 'H' || command == 'h')
        {
            printf("\e[1;1H\e[2J");
            chit_chat();

        }
       
    }
    return 0;
}
