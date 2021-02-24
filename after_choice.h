//to print the statements after the choices are made
#include<stdio.h>
#include "instructions.h"
#include "category.h"
void after_name()
{
    char ch;
    printf("\e[1;1H\e[2J");
    printf("\t\t\t > Press S to Start the game\n");
    printf("\t\t\t > Press C to Continue the previous game\n");
    printf("\t\t\t > Press I for Rules and Regulations\n");
    printf("\t\t\t > Press H for Highest score\n");
    printf("\t\t\t > Press R to Reset score\n");
    printf("\t\t\t > Press Q to Quit Game\n");
    printf("\t\t\t > Choice->");
    scanf(" %c",&ch);
    if(toupper(ch)=='S')
    {
        category();
    }
    if(toupper(ch)=='Q')
    {
        return 0;
    }
    if(toupper(ch)=='I')
    {
        instructions();
    }
       
}
void quit()
{
    printf("\n\t\t\t\t\tThank you for playing the game\n");
    return after_name();
}