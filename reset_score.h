#include<stdio.h>
int reset_score();

int reset_score()
{
    FILE * ptr;
    FILE * fptr;
    char a;
    
    for (int i = 0;i < 1000;i++)
    {
        printf("\033[0;37mAre you sure you want to reset the score(Y or N):\033[0m");
        scanf(" %c" , &a);
        if(toupper(a) == 'Y')
        {
            ptr = fopen("prev_scores.txt" , "w");
            fptr = fopen("serial_number.txt" , "w");
            fprintf(fptr , "0");
            fclose(fptr);
            fclose(ptr);
            printf("\nYour Scores has beet reset successfully!");
            sleep(2);
            return after_name();
            break;
        }
        else if(toupper(a) == 'N')
        {
            return after_name();
            break;  
        }
        else
        {
            printf("Please make a valid choice..!!\n");
        }
    }
}
