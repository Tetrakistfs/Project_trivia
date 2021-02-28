#include<stdio.h>
int prev_scores();

int prev_scores()
{
    FILE * ptr;
    FILE * fptr = fopen("serial_number.txt", "r");
    int check_file;
    fscanf(fptr,"%d", &check_file);
    printf("\e[1;1H\e[2J");
    if(check_file == 0)
    {
        printf("\033[7m\t\t\tNO GAME HAS BEEN PLAYED YET\n\033[0m");
        sleep(2);
        return after_name();
    }
    char string[2000];
    ptr = fopen("prev_scores.txt", "r");
    printf("\033[1;36mSNo.\t\tScores\t\tCategory\n\033[0m");
    fscanf(ptr, " %[^\0]s" , string);
    printf("%s\n" , string);
    fclose(ptr);
    printf("\nYou will be returned to the main screen in ");
    for(int i=5; i>0;i--)
    {
        printf("%d..", i);
        sleep(1);
    }
    return after_name();


}