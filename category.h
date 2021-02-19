//for the category section
#include<stdio.h>
#include "after_choice.h"

#include "avengers.h"
#include "anime.h"
#include "fiction_&_literature"
#include "gaming.h"
#include "global_chit_chats.h"
#include "sports.h"
#include "technology.h"
#include "music.h"

int category()
{
    char choose_cat;
    printf("\t\t\tPick any 1 category:\n");
    printf("\n\t\t\tA). BOOKWORM\n");
    printf("\n\t\t\tB). POLYMUSE\n");
    printf("\n\t\t\tC). CINEMAPHILE\n");
    printf("\n\t\t\tD). SPORTS\n");
    printf("\n\t\t\tE). THE GEEK\n");
    printf("\n\t\t\tF). THE WEEB\n");
    printf("\n\t\t\tG). GAMING\n");
    printf("\n\t\t\tH). Global Chit-Chats\n"); 
    printf("\n\t\t\tPress 'Q' to return to Main Menu\n");
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
        chit_chat();
    }
    if(toupper(choose_cat) == 'Q')
    {
        after_name();
    }
    
}