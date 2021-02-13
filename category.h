//for the category section
#include<stdio.h>

int category()
{
    char choose_cat[5];
    printf("\t\t\tPick any 3 categories:\n");
    printf("\n\t\t\tA). BOOKWORM\n");
    printf("\n\t\t\tB). POLYMUSE\n");
    printf("\n\t\t\tC). CINEMAPHILE\n");
    printf("\n\t\t\tD). SPORTS\n");
    printf("\n\t\t\tE). THE GEEK\n");
    printf("\n\t\t\tF). THE WEEB\n");
    printf("\n\t\t\tG). GAMING\n");
    printf("\n\t\t\tH). Global Chit-Chats\n");
    printf("\t\t\tchoose your categories::");

    int choose_cout = 0;
    while(choose_cout<3)
    {
        printf("category:%--> %d.", choose_cout+1);
        scanf(" %c", &choose_cat[choose_cout]);
        if (choose_cat[choose_cout]=='A' || choose_cat[choose_cout]=='a' || choose_cat[choose_cout]=='B' || choose_cat[choose_cout]=='b' || choose_cat[choose_cout]=='C' || choose_cat[choose_cout]=='c' || choose_cat[choose_cout]=='D' || choose_cat[choose_cout]=='d' || choose_cat[choose_cout]=='E' || choose_cat[choose_cout]=='e' || choose_cat[choose_cout]=='F' || choose_cat[choose_cout]=='f' || choose_cat[choose_cout]=='G' || choose_cat[choose_cout]=='g' ||choose_cat[choose_cout]=='H'||choose_cat[choose_cout]=='h')
        choose_cout++;
        else
        printf("That's not a valid category \"DUMMY\",choose a valid category\n");
    }
}