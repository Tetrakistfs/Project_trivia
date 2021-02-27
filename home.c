#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include <unistd.h>
#include "after_choice.h"

int main()
{
    char name[31],command;
    int n;
    printf("\e[1;1H\e[2J");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t             C PROGRAM QUIZ GAME               \n");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t            Enter your name:");
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
    printf("\t\t\tGame is Loading ");
    for(int i=3;i>0;i--)
    {
        printf("%d..", i);
        sleep(1);
    }
    after_name();
    return 0;
}
