//for the category section
#include<stdio.h>

int category()
{
    char choose_cat[5];
    printf("\t\t\tPick any 5 categories:\n");
    printf("\nA). BOOKWORM\n");
    printf("\nB). POLYMUSE\n");
    printf("\nC). CINEMAPHILE");
    printf("\nD). SPORTS\n");
    printf("\nE). THE GEEK\n");
    printf("\nF). THE WEEB\n");
    printf("\nG). GAMING\n");
    printf("choose your categories::");

    int choose_cout = 0;
    while(choose_cout<5)
    {
        printf("category:%--> %d.", choose_cout+1);
        scanf(" %c", &choose_cat[choose_cout]);
        if (choose_cat[choose_cout]=='A' || choose_cat[choose_cout]=='a' || choose_cat[choose_cout]=='B' || choose_cat[choose_cout]=='b' || choose_cat[choose_cout]=='C' || choose_cat[choose_cout]=='c' || choose_cat[choose_cout]=='D' || choose_cat[choose_cout]=='d' || choose_cat[choose_cout]=='E' || choose_cat[choose_cout]=='e' || choose_cat[choose_cout]=='F' || choose_cat[choose_cout]=='f' || choose_cat[choose_cout]=='G' || choose_cat[choose_cout]=='g')
        choose_cout++;
        else
        printf("That's not a valid category \"DUMMY\",choose a valid category\n");
    }
}