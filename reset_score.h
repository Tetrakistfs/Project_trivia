#include<stdio.h>
int reset_score()
{
    FILE * ptr;
    char a;
    
    printf("Are you sure you want to reset the score(Y or N):");
    scanf("%c" , &a);
    for (int i = 0;i < 1000;i++)
    {
        if(toupper(a) == 'Y')
        {
            ptr = fopen("prev_scores.txt" , "w");
            fclose(ptr);
            break;
        }
        else if(touuper(a) == 'N')
        {
//return after_choice
            break;  
        }
        else
        {
            printf("Please make a valid choice:");
        }
    }
}
