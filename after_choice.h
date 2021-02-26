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

//to quit the game
void quit()
{
    printf("\n\t\t\t\t\tThank you for playing the game\n");
    return after_name();
}

                /*****to be displayed after a choice in the category has been made*******/
/******incomplete******/
char after_cat;

                                /**common program to be displayed after each category**/ 
int common_instruct()
{
    printf("There will be a total of 15 Questions\n");
    printf("Press E to enter the quiz:\n");
    printf("Press R to return to the category choice menu:\n");
    printf("Press I to see Instructions:\n");
    printf("Decision --> ");
    scanf(" %c", &after_cat);
    return (after_cat);
}  


                                /****for THE WEEB choice****/
int after_anime()
{
    printf("\e[1;1H\e[2J");
    printf("\"THE WEEB\n\"");
    printf("This category is about Anime If you watch em.\n");
    common_instruct();
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {    
            anime();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }
        if(toupper(after_cat) == 'I')
        {
            instructions();
            break;
        }

        else
        {
            printf("Enter a valid choice, DUMMY!!\n");
            continue;
        }
    }    
}

                                    /****for the POLYMUSE choice****/
int after_music()
{
    printf("\e[1;1H\e[2J");
    printf("\"THE WEEB\n\"");
    printf("This category is about MUSIC If you didn't bleed your eyes out.\n");
    common_instruct();
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {    
            music();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }
        if(toupper(after_cat) == 'I')
        {
            instructions();
            break;
        }

        else
        {
            printf("Enter a valid choice, DUMMY!!\n");
            continue;
        }
    }    
}
  


//     for(int i=0; i<1000;i++)
//     {
//         if(toupper(after_cat) == 'E')
//         {    
//             anime();
//             break;
//         }    
//         if(toupper(after_cat) == 'R')
//         {
//             category();
//             break;
//         }
//         if(toupper(after_cat) == 'I')
//         {
//             instructions();
//             break;
//         }

//         else
//         {
//             printf("Enter a valid choice, DUMMY!!\n");
//             continue;
//         }    
//     }    

