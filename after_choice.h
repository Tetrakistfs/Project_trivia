                            /****to print the statements after the choices are made****/
#include<stdio.h>
char decision;                      //to be used in all quizzes headers files after the game is over

#include "instructions.h"
#include "category.h"
#include"prev_scores.h"
#include"reset_score.h"

int after_name()
{
    char ch;
    printf("\e[1;1H\e[2J");
    printf("\033[1m\t\t\t\033[7m              THE QUIZZITCH               \033[0m\n");
    printf("\033[0;32m\t\t\t > Press S to Start the game\n");
    printf("\t\t\t > Press I for Rules and Regulations\n");
    printf("\t\t\t > Press P for Previous score\n");
    printf("\t\t\t > Press R to Reset score\n");
    printf("\t\t\t > Press Q to Quit Game\n\033[0m");
    printf("\033[0;33m\t\t\t > Choice->\033[0m");
    scanf(" %c",&ch);
    if(toupper(ch)=='S')
    {
        category();
    }
    if(toupper(ch)=='I')
    {
        instructions();
    }
    if(toupper(ch)=='P')
    {
        prev_scores();
    }
    if(toupper(ch)=='R')
    {
        reset_score();
    }
    if(toupper(ch)=='Q')
    {
        exit(0);
    }
    else
    printf("\033[1;31m\t\t\tNOT A VALID CHOICE\033[0m");
    sleep(2);
    after_name();
<<<<<<< HEAD

=======
>>>>>>> 05dcf19be9737974064cf421404ab10d91736506
}

//to quit the game
int quit()
{
    printf("\033[0;36m\n\t\t\t\t\t\033[7mThank you for playing the game\n\033[0m");
    sleep(1);
    return after_name();
}

                        /*****to be displayed after a choice in the category has been made*******/
char after_cat;

                                /**common function to be displayed after each category**/ 
int common_instruct()
{
    printf("\033[0;31mOnce started you cannot quit the quiz in the middle\033[0m\n");             //setting the color red
    printf("There will be a total of 15 Questions\n");
    printf("Press E to enter the quiz:\n");
    printf("Press R to return to the category choice menu:\n");
    printf("Decision --> \033");                                                    //setting the color blue
    scanf(" %c", &after_cat);
    return (after_cat);
}  

//1                                           /****for FICTION choice****/
int after_fiction()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\033[1;35m\"Fiction\"\n\033[0m");
    printf("\033[0;36mThis category is about Fiction and Literature and reading books is good(not the Kindle!..).\n\033[0m");    //cyan color
    common_instruct();
    FILE * fp = fopen("serial_number.txt" , "r");
    fscanf(fp , "%d" , &count);
    fclose(fp);
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {   
            fp = fopen("serial_number.txt" , "w");
            count = count+1;
            fprintf(fp , "%d" , count);
            fclose(fp); 
            fiction();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }

        else
        {
            printf("\033[0;31mEnter a valid choice, DUMMY!!\n\033[0m");
            common_instruct();
        }
    }    
}


//2                                          /****for the POLYMUSE choice****/
int after_music()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\033[1;35m\"POLYMUSE\"\n\033[0m");
    printf("\033[0;36mThis category is about MUSIC If you didn't bleed your ears out.\n\033[0m");
    common_instruct();
    FILE * fp = fopen("serial_number.txt" , "r");
    fscanf(fp , "%d" , &count);
    fclose(fp);
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {  
            fp = fopen("serial_number.txt" , "w");
            count = count+1;
            fprintf(fp , "%d" , count);
            fclose(fp);   
            music();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }

        else
        {
            printf("\033[0;31mEnter a valid choice, DUMMY!!\n\033[0m");
            common_instruct();
        }
    }    
}
  
//3                                          /****for the CINEMAPHILE choice****/
int after_avengers()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\033[1;35m\"THE CINEMAPHILE\"\n\033[0m");
    printf("\033[0;36mThis category is about Movies especially MCU cause we didn't had any other questions.\n\033[0m");
    common_instruct();
    FILE * fp = fopen("serial_number.txt" , "r");
    fscanf(fp , "%d" , &count);
    fclose(fp);
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {    
            fp = fopen("serial_number.txt" , "w");
            count = count+1;
            fprintf(fp , "%d" , count);
            fclose(fp); 
            avengers();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }

        else
        {
            printf("\033[0;31mEnter a valid choice, DUMMY!!\n\033[0m");
            common_instruct();
        }
    }    
}

//4                                          /****for the SPORTS choice****/
int after_sports()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\033[1;35m\"Sports\n\"\033[0m");
    printf("\033[0;36mThis category is about Sports and Hope you don't count your situps!!...\n\033[0m");
    common_instruct();
    FILE * fp = fopen("serial_number.txt" , "r");
    fscanf(fp , "%d" , &count);
    fclose(fp);
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {    
            fp = fopen("serial_number.txt" , "w");
            count = count+1;
            fprintf(fp , "%d" , count);
            fclose(fp); 
            sports();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }

        else
        {
            printf("\033[0;31mEnter a valid choice, DUMMY!!\n\033[0m");
            common_instruct();
        }
    }    
}

//5                                           /****for the TECHNOLOGY choice****/
int after_technology()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\033[1;35m\"Technology\"\n\033[0m");
    printf("\033[0;36mThis category is about Technology and i'm sure you can do it.\n\033[0m");
    common_instruct();
    FILE * fp = fopen("serial_number.txt" , "r");
    fscanf(fp , "%d" , &count);
    fclose(fp);
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {    
            fp = fopen("serial_number.txt" , "w");
            count = count+1;
            fprintf(fp , "%d" , count);
            fclose(fp); 
            technology();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }

        else
        {
            printf("\033[0;31mEnter a valid choice, DUMMY!!\n\033[0m");
            common_instruct();
        }
    }    
}

//6                                          /****for THE WEEB choice****/
int after_anime()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\033[1;35m\"THE WEEB\"\n\033[0m");
    printf("\033[0;36mThis category is about Anime If you watch em.\n\033[0m");
    common_instruct();
    FILE * fp = fopen("serial_number.txt" , "r");
    fscanf(fp , "%d" , &count);
    fclose(fp);
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {    
            fp = fopen("serial_number.txt" , "w");
            count = count+1;
            fprintf(fp , "%d" , count);
            fclose(fp); 
            anime();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }

        else
        {
            printf("\033[0;31mEnter a valid choice, DUMMY!!\n\033[0m");
            common_instruct();
        }
    }    
}

//7                                          /****for the GAMING choice****/
int after_gaming()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\033[1;35m\"GAMING\"\n\033[0m");
    printf("\033[0;36mThis category is about Gaming and i'm sure that you play them.\n\033[0m");
    common_instruct();
    FILE * fp = fopen("serial_number.txt" , "r");
    fscanf(fp , "%d" , &count);
    fclose(fp);
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {   
            fp = fopen("serial_number.txt" , "w");
            count = count+1;
            fprintf(fp , "%d" , count);
            fclose(fp);  
            gaming();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }
        else
        {
            printf("\033[0;31mEnter a valid choice, DUMMY!!\n\033[0m");
            common_instruct();
        }
    }    
}

//8                                      /****for the GLOBAL CHIT CHATS choice****/
int after_global_chit_chats()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\033[1;35m\"GLOBAL CHIT CHATS\"\033[0m");
    printf("\033[0;36mThis category is about Global news if you watch the news channels.\n\033[0m");
    common_instruct();
    FILE * fp = fopen("serial_number.txt" , "r");
    fscanf(fp , "%d" , &count);
    fclose(fp);
    for(int i=0; i<1000;i++)
    {
        if(toupper(after_cat) == 'E')
        {  
            fp = fopen("serial_number.txt" , "w");
            count = count+1;
            fprintf(fp , "%d" , count);
            fclose(fp);   
            global_chit_chats();
            break;
        }    
        if(toupper(after_cat) == 'R')
        {
            category();
            break;
        }
        else
        {
            printf("\033[0;31mEnter a valid choice, DUMMY!!\n\033[0m");
            common_instruct();
        }
    }    
}
