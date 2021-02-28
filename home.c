#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include <unistd.h>
#include "after_choice.h"

int main()
{
    char name[31],command;
    printf("\e[1;1H\e[2J");
    printf("\t\t\t_______________________________________________\n");
    printf("\033[1m\t\t\t\033[7m          The League of Extraordinary Guessers \033[0m\n");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t            Enter your name:");
    fgets(name,31,stdin);
    printf("\e[1;1H\e[2J");
    printf("\t\t\t_______________________________________________\n");
    printf("\033[1m\t\t\t\033[7m          The League of Extraordinary Guessers \033[0m\n");
    printf("\t\t\t_______________________________________________\n");
    printf("\t\t\t                  HI %s \n", name);
    printf("\033[1m\t\t\t\033[7m              WELCOME TO THE QUIZZITCH          \033[0m\n");
    printf("\t\t\t________________________________________________\n");
    printf("\t\t\t________________________________________________\n");
    printf("\033[1;31m\t\t\t            WE ARE GOOGLING EVERYTHING!!!           \033[0m\n");
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
