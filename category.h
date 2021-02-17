//for the category section
#include<stdio.h>

int category()
{
    char choose_cat[3];
    printf("\t\t\tPick any 3 categories:\n");
    printf("\n\t\t\tA). BOOKWORM\n");
    printf("\n\t\t\tB). POLYMUSE\n");
    printf("\n\t\t\tC). CINEMAPHILE\n");
    printf("\n\t\t\tD). SPORTS\n");
    printf("\n\t\t\tE). THE GEEK\n");
    printf("\n\t\t\tF). THE WEEB\n");
    printf("\n\t\t\tG). GAMING\n");
    printf("\n\t\t\tH). Global Chit-Chats\n");
    printf("\t\t\tchoose your categories::\n");

    int choose_cout = 0;
    while(choose_cout<3)
    {
        printf("\t\t\tcategory:%--> %d.", choose_cout+1);
        scanf(" %c", &choose_cat[choose_cout]);
        if (toupper(choose_cat[choose_cout]) =='A' || toupper(choose_cat[choose_cout]) =='B' || toupper(choose_cat[choose_cout]) =='C' || toupper(choose_cat[choose_cout]) =='D'||
            toupper(choose_cat[choose_cout]) =='E' || toupper(choose_cat[choose_cout]) =='F' || toupper(choose_cat[choose_cout]) =='G' || toupper(choose_cat[choose_cout]) =='H')
        choose_cout++;
        else
        printf("That's not a valid category \"DUMMY\",choose a valid category\n");
        if(choose_cout == 3)
        return 0;
    }
}