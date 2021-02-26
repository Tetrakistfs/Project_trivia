#include<stdio.h>
int prev_scores();
int main()
{
    prev_scores();
}
int prev_scores()
{
    FILE * ptr;
    char string[2000];
    ptr = fopen("prev_scores.txt", "r");
    printf("SNo.\t\tScores\t\tCategory\n");
    fscanf(ptr, " %[^\0]s" , string);
    /*int j = 0;
    printf("1.");
    for(int i = 0; i < 2000;i++)
    {
        if(string[i] == '\n')
        {
            printf("%d" , j);
            j++;
        }
        for(int k = i ; string[k] != '\n' ; k++)
        {printf("%c" , string[k]);}
        if(string[i] == '\0')
        {break;}
        
    }*/
    printf("%s\n" , string);
    fclose(ptr);
}
//serial number to be added