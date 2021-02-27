#include<stdio.h>
int prev_scores();

int prev_scores()
{
    FILE * ptr;
    FILE * fptr = fopen("serial_number.txt", "r");
    int check_file;
    fscanf(fptr,"%d", &check_file);
    if(check_file == 0)
    {
        printf("\t\t\tNO GAME HAS BEEN PLAYED YET\n");
        return after_name();
    }
    char string[2000];
    ptr = fopen("prev_scores.txt", "r");
    printf("SNo.\t\tScores\t\tCategory\n");
    fscanf(ptr, " %[^\0]s" , string);
    printf("%s\n" , string);
    fclose(ptr);
    sleep(3);
    return after_name();


}