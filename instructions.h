//instructions of the Trivia
#include<stdio.h>

                                    /**For the main menu**/
int main_instruct()
{
    printf("\e[1;1H\e[2J");
    printf("\t\t\t\t\t\t|||| TRIVIA GAME ||||\n");
    printf("\t\t\t\t\t    ||| RULES AND REGULATIONS |||\n");
    printf("\t\tThe rule of the game is simple: \"The more quesetions you answer the higher your points would be\"\n");
    printf("\t\t\t\tThe questions would be divided in three categories:\n");        //category section
    printf("\t\t\t\t\t\t    Easy\n\t\t\t\t\t\tIntermediate\n\t\t\t\t\t\t Challenging\n");
    printf("\t\t\t\t  For each right answer you will be awarded 100 points.\n");
    printf("\t\tFirst five questions will be of easy type and next five questions will be of\n");
    printf("\t\t\t\tintermediate level and next five will be hard\n");
    printf("\n\t\t\tpress 'R' to return to the game\n\t\t\tpress 'Q' to quit to main menu\n");
    char ch;
    for(int i = 0;i < 1000;i++)
    {
        printf("\t\t\t: ");
        scanf(" %c", &ch);
        if(toupper(ch) == 'R')
        {
            return after_name();
            break;
        }
        else
        printf("You only had to enter Y or N as an answer\tGo again: \n");
    }
}

                                        /**for the category section**/
int instructions()
{
    printf("\e[1;1H\e[2J");
    printf("\t\t\t\t\t\t|||| TRIVIA GAME ||||\n");
    printf("\t\t\t\t\t    ||| RULES AND REGULATIONS |||\n");
    printf("\t\tThe rule of the game is simple: \"The more quesetions you answer the higher your points would be\"\n");
    printf("\t\t\t\tThe questions would be divided in three categories:\n");        //category section
    printf("\t\t\t\t\t\t    Easy\n\t\t\t\t\t\tIntermediate\n\t\t\t\t\t\t Challenging\n");
    printf("\t\t\t\t  For each right answer you will be awarded 100 points.\n");
    printf("\t\tFirst five questions will be of easy type and next five questions will be of\n");
    printf("\t\t\t\tintermediate level and next five will be hard\n");
    printf("\n\t\t\tpress 'R' to return to the game\n");
    char ch;
    for(int i = 0;i < 1000;i++)
    {
        printf("\t\t\t: ");
        scanf(" %c", &ch);
        if(toupper(ch) == 'R')
        {
            return (int) category();
            i = 999;
        }
        else
        printf("You only had to enter Y or N as an answer\tGo again: \n");
    }
}


