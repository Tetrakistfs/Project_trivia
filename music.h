//Contains questions on music
//first 5 questions are easy , next 5 are intermediate and last 5 are hard
#include<stdio.h>
int music()
{
    int score = 0;
    char choice[15];
    printf("\e[1;1H\e[2J");
    printf("1.Who is credited with creating the world famous Raaga Miya ki Malhar?\n\tA.\tAmir Khusro\n\tB.\tTansen\n\tC.\tMeera Bai\n\tD.\tBhimsen Joshi\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(toupper(choice[0]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("2.The oldest form of composition of Hindustani Vocal Music is:\n\tA.\tGhazal\n\tB.\tDhrupad\n\tC.\tThumri\n\tD.\tQawwali\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(toupper(choice[1]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("3. Which is a wind instrument?\n\tA.\tSitar\n\tB.\tShehnai\n\tC.\tPakhawaj\n\tD.\tMridangam\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(toupper(choice[2]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("4.Who is not related to music?\n\tA.\tMozart\n\tB.\tBach\n\tC.\tPicasso\n\tD.\tBethoven\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(toupper(choice[3]) == 'C')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is C\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("5.Yakshagana is a dance form of -\n\tA.\tAndhra Pradesh\n\tB.\tKarnataka\n\tC.\tTamil Nadu\n\tD.\tMaharashtra\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(toupper(choice[4]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("6.Hojagiri dance is native to which State?\n\tA.\tSikkim\n\tB.\tOdisha\n\tC.\tAssam\n\tD.\tTripura\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(toupper(choice[5]) == 'D')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is D\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("7. Which stringed instrument has the most number of strings?\n\tA.\tGuitar\n\tB.\tUkulele\n\tC.\tViolin\n\tD.\tSitar\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(toupper(choice[6]) == 'D')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is D\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("8.With which musical instrument is Sandeep Das associated?\n\tA.\tTabla\n\tB.\tSitar\n\tC.\tGuitar\n\tD.\tViolin\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(toupper(choice[7]) == 'A')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is A\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("9.Gulabo Sapera is associated with which form of folk dance?\n\tA.\tJhumar\n\tB.\tGarba\n\tC.\tKalbelia\n\tD.\tLavani\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(toupper(choice[8]) == 'C')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is C\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("10.Sattriya is a classical dance form of which State?\n\tA.\tAssam\n\tB.\tWest Bengal\n\tC.\tOdisha\n\tD.\tKerala\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(toupper(choice[9]) == 'A')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is A\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("11.With which State is Bhavai dance form associated?\n\tA.\tGujarat\n\tB.\tRajasthan\n\tC.\tChhattisgarh\n\tD.\tOdisha\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(toupper(choice[10]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("12.Shanta and VP Dhananjayan are associated with which form of dance-\n\tA.\tYakshagana\n\tB.\tKuchipudi\n\tC.\tBharat Natyam\n\tD.\tOdissi\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(toupper(choice[11]) == 'C')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is C\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("13.Arvind Parikh is associated with which musical instrument?\n\tA.\tPakhawaj\n\tB.\tSitar\n\tC.\tViolin\n\tD.\tTabla\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(toupper(choice[12]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("14.Hariprasad Chaurasia is associated with which musical instrument?\n\tA.\tTabla\n\tB.\tFlute\n\tC.\tShehnai\n\tD.\tSantoor\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(toupper(choice[13]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("15.Dollu Kunitha is a popular folk dance of -\n\tA.\tNagaland\n\tB.\tGujarat\n\tC.\tKarnataka\n\tD.\tJharkhand\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(toupper(choice[14]) == 'C')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is C\n");}
    if(score>1000)
    {
        printf("Congrants!!! Your Score is %d\n" , score);
        printf("\033[7mYou Rocked it!!\n\033[0m");
    }
    else if(score>500)
    {
        printf("Congrants!!! Your Score is %d\n" ,score);
        printf("\033[7mGood Performance\n\033[0m");
    }
    else
    {
        printf("Your Score is %d\n" ,score);
        printf("\033[7mBetter luck next time\n\033[0m");
    }
    int s_num;
    FILE * ptr = NULL;;
    FILE * num = fopen("serial_number.txt" , "r");
    fscanf(num, "%d", &s_num);
    fclose(num);
    ptr = fopen("prev_scores.txt", "a");
    fprintf(ptr, "%d\t\t%d\t\tPOLYMUSE\n",s_num,score);
    fclose(ptr);
    for(int i = 0;i < 1000;i++)
    {
        printf("Do You want to take the Quiz again Y/N : ");
        scanf(" %c", &decision);
        if(toupper(decision) == 'Y')
        {
            return category();
        }
        if(toupper(decision) == 'N')
        {
            return quit();
            i = 999;
        }

        else
        printf("You only had to enter Y or N as an answer\tGo again: \n");
    }
}