//to print the statements after the choices are made
#include<stdio.h>
#include "instructions.h"
#include "category.h"

int after_name()
{
    char command;
        printf("\e[1;1H\e[2J");
        printf("\t\t\t > Press S to Start the game\n");
        printf("\t\t\t > Press C to Continue the previous game\n");
        printf("\t\t\t > Press I for Rules and Regulations\n");
        printf("\t\t\t > Press H for Highest score\n");
        printf("\t\t\t > Press T to Reset score\n");
        printf("\t\t\t > Press Q to Quit Game\n");
        printf("\t\t\t > Choice->");
        scanf(" %c",&command);
        if(toupper(command) == 'S')
        {
            category();
        }

        if(toupper(command) == 'I')
        {
            instructions();
        }
        
        if(toupper(command) == 'Q')
        {
            return 0;
        }

}

int quit()
{
    printf("\n\t\t\t\t\tThank you for playing the game\n");
    printf("\t\t\t\t\tYour score was %d", score);
}