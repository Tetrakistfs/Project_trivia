//for the category section
#include<stdio.h>

#include "fiction_&_literature.h"
#include "music.h"
#include "avengers.h"
#include "sports.h"
#include "technology.h"
#include "anime.h"
#include "gaming.h"
#include "global_chit_chats.h"


int after_fiction();
int after_music();
int after_avengers();
int after_sports();
int after_technology();
int after_anime();
int after_gaming();
int after_global_chit_chats();

int count = 1;
char choose_cat;

int category()
{
    
    printf("\e[1;1H\e[2J");
    printf("\t\t\tPick any 1 category:");
    printf("\n\t\t\tA). BOOKWORM");
    printf("\n\t\t\tB). POLYMUSE");
    printf("\n\t\t\tC). CINEMAPHILE");
    printf("\n\t\t\tD). SPORTS");
    printf("\n\t\t\tE). THE GEEK");
    printf("\n\t\t\tF). THE WEEB");
    printf("\n\t\t\tG). GAMING");
    printf("\n\t\t\tH). Global Chit-Chats"); 
    printf("\n\t\t\tPress 'Q' to return to Main Menu");
    printf("\n\t\t\tPress 'I' to see Instructions");
    printf("\n\t\t\tChoice->");
    scanf(" %c",&choose_cat);
    if(toupper(choose_cat) == 'A')
    {
        after_fiction();
    }
    if(toupper(choose_cat) == 'B')
    {
        after_music();
    }
    if(toupper(choose_cat) == 'C')
    {
        after_avengers();
    }
    if(toupper(choose_cat) == 'D')
    {
        after_sports();
    }
    if(toupper(choose_cat) == 'E')
    {
        after_technology();
    }
    if(toupper(choose_cat) == 'F')
    {
        after_anime();
    }
    if(toupper(choose_cat) == 'G')
    {
        after_gaming();
    }
    if(toupper(choose_cat) == 'H')
    {
        after_global_chit_chats();
    }
    if(toupper(choose_cat) == 'Q')
    {
        after_name();
    }
    if(toupper(choose_cat) == 'I')
    {
        instructions();
    }
    // else
    // printf("\n\t\t\tNot A valid Choice..!!");
    // int category();
}