#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include "after_choice.h"
#include "instructions.h"
#include "category.h"
int main()
{
    char name[31],command;
    int n;
    printf("\e[1;1H\e[2J");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t             C PROGRAM QUIZ GAME               \n");
    printf("\t\t\t_______________________________________________\n");
    printf("              Enter your name:");
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
        printf("choice-->");
        scanf(" %c", &command);
        
        if(toupper(command) == 'I')
        {
            printf("wait ");
            for(int i=2;i>0;i--)
            {
                printf("%d..", i);
                sleep(1);
            }
            printf("\e[1;1H\e[2J");
            instructions();
        }
        if(toupper(command) == 'S')
        {
            printf("\e[1;1H\e[2J");
            category();
        }

        if(toupper(command) == 'Q')
        i=999;

        else
        {
            printf("Make a valid choice...!!!!");
        }
        
    }
    return 0;
}
