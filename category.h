//for the category section
#include<stdio.h>
#include "avengers.h"
#include "anime.h"
#include "fiction_&_literature.h"
#include "gaming.h"
#include "global_chit_chats.h"
#include "sports.h"
#include "technology.h"
#include "music.h"
int category()
{
    char choose_cat;
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
    printf("\n\t\t\tChoice->");
    scanf(" %c",&choose_cat);
    if(toupper(choose_cat) == 'A')
    {
        fiction();
    }
    if(toupper(choose_cat) == 'B')
    {
        music();
    }
    if(toupper(choose_cat) == 'C')
    {
        avengers();
    }
    if(toupper(choose_cat) == 'D')
    {
        sports();
    }
    if(toupper(choose_cat) == 'E')
    {
        technology();
    }
    if(toupper(choose_cat) == 'F')
    {
        anime();
    }
    if(toupper(choose_cat) == 'G')
    {
        gaming();
    }
    if(toupper(choose_cat) == 'H')
    {
        global_chit_chats();
    }
    if(toupper(choose_cat) == 'Q')
    {
        after_name();
    }
    
}