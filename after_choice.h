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
    printf("\t\t\t > Press S to Start the game\n");
    printf("\t\t\t > Press I for Rules and Regulations\n");
    printf("\t\t\t > Press P for Previous score\n");
    printf("\t\t\t > Press R to Reset score\n");
    printf("\t\t\t > Press Q to Quit Game\n");
    printf("\t\t\t > Choice->");
    scanf(" %c",&ch);
    if(toupper(ch)=='S')
    {
        category();
    }
    else if(toupper(ch)=='I')
    {
        main_instruct();
    }
    else if(toupper(ch)=='P')
    {
        prev_scores();
    }
    else if(toupper(ch)=='R')
    {
        reset_score();
    }
    else if(toupper(ch)=='Q')
    {
        exit(0);
    }
    else
    {
        printf("\n\t\t\tNot A valid Choice..!!");
        sleep(1);
        after_name();
    }

}

//to quit the game
int quit()
{
    printf("\n\t\t\t\t\tThank you for playing the game\n");
    return after_name();
}

                        /*****to be displayed after a choice in the category has been made*******/
char after_cat;

                                /**common function to be displayed after each category**/ 
int common_instruct()
{
    printf("\e[1;1H\e[2J");
    printf("There will be a total of 15 Questions\n");
    printf("Once started you cannot quit the quiz in the middle\n");
    printf("Press E to enter the quiz:\n");
    printf("Press R to return to the category choice menu:\n");
    printf("Decision --> ");
    scanf(" %c", &after_cat);
    return (after_cat);
}  

//1                                           /****for FICTION choice****/
int after_fiction()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\"Fiction\"\n");
    printf("This category is about Fiction and Literature and reading books is good(not the Kindle!..).\n");
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
            printf("Enter a valid choice, DUMMY!!\n");
            common_instruct();
        }
    }    
}


//2                                          /****for the POLYMUSE choice****/
int after_music()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\"POLYMUSE\"\n");
    printf("This category is about MUSIC If you didn't bleed your ears out.\n");
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
            printf("Enter a valid choice, DUMMY!!\n");
            common_instruct();
        }
    }    
}
  
//3                                          /****for the CINEMAPHILE choice****/
int after_avengers()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\"THE CINEMAPHILE\"\n");
    printf("This category is about Movies especially MCU cause we didn't had any other questions.\n");
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
            printf("Enter a valid choice, DUMMY!!\n");
            common_instruct();
        }
    }    
}

//4                                          /****for the SPORTS choice****/
int after_sports()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\"Sports\n\"");
    printf("This category is about Sports and Hope you don't count your situps!!...\n");
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
            printf("Enter a valid choice, DUMMY!!\n");
            common_instruct();
        }
    }    
}

//5                                           /****for the TECHNOLOGY choice****/
int after_technology()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\"Technology\"\n");
    printf("This category is about Technology and i'm sure you can do it.\n");
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
            printf("Enter a valid choice, DUMMY!!\n");
            common_instruct();
        }
    }    
}

//6                                          /****for THE WEEB choice****/
int after_anime()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\"THE WEEB\"\n");
    printf("This category is about Anime If you watch em.\n");
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
            printf("Enter a valid choice, DUMMY!!\n");
            common_instruct();
        }
    }    
}

//7                                          /****for the GAMING choice****/
int after_gaming()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\"GAMING\"\n");
    printf("This category is about Gaming and i'm sure that you play them.\n");
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
            printf("Enter a valid choice, DUMMY!!\n");
            common_instruct();
        }
    }    
}

//8                                      /****for the GLOBAL CHIT CHATS choice****/
int after_global_chit_chats()
{
    int count;
    printf("\e[1;1H\e[2J");
    printf("\"GLOBAL CHIT CHATS\"");
    printf("\nThis category is about Global news if you watch the news channels.\n");
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
            printf("Enter a valid choice, DUMMY!!\n");
            common_instruct();
        }
    }    
}
