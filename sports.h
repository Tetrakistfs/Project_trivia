//Contains questions on current affairs
//first 5 questions are easy , next 5 are intermediate and last 5 are hard
#include<stdio.h>

int sports()
{
    int score = 0;
    char choice[15];
    printf("\e[1;1H\e[2J");
    printf("1.'Electra Gold Cup' is associated with which sports?\n\tA.\tLawn Tennis\n\tB.\tTable Tennis\n\tC.\t Badminton\n\tD.\tFootball\n");
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
    printf("2.Who among the following was first black Formula One World Champion in history?\n\tA.\tM  Felipe Massa\n\tB.\tJensson Button\n\tC.\tLewis Hamilton\n\tD.\tFernando Alonso\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(toupper(choice[1]) == 'C')
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
    printf("3.Euro Cup is related to which sports?\n\tA.\tBadminton\n\tB.\tFootball\n\tC.\tTable Tennis\n\tD.\tHockey\n");
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
    printf("4.Who among the following was known as Flying Sikh?\n\tA.\tMilkha Singh\n\tB.\tHarbhajan Singh\n\tC.\tYuvaraj Singh\n\tD.\tGurbachan Singh\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(toupper(choice[3]) == 'A')
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
    printf("5.Kazakhstan is a part of which of the following continental confederations recognized by FIFA?\n\tA.\tAsian Football Confederation\n\tB.\tConfederation Africaine de Football\n\tC.\tUnion of European Football Associations\n\tD.\tNone of them\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(toupper(choice[4]) == 'C')
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
    printf("6.Who is the Mascot of Hockey World Cup 2018?\n\tA.\tOlly\n\tB.\tPerko\n\tC.\tStockey\n\tD.\tStumpy\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(toupper(choice[5]) == 'A')
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
    printf("7.Who is the current manager of Manchester United?\n\tA.\tJose Mourinho\n\tB.\tMarco Silva\n\tC.\tClaude Puel\n\tD.\tRoy Hodgson\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(toupper(choice[6]) == 'A')
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
    printf("8.When was the first women's T20I match hosted in India?\n\tA.\t1999\n\tB.\t1994\n\tC.\t2006\n\tD.\t2010\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(toupper(choice[7]) == 'D')
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
    printf("9.How many nations had participated in the first Olympic Games held in 1896?\n\tA.\t20\n\tB.\t35\n\tC.\t14\n\tD.\t63\n");
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
    printf("10.Who is ranked number one women's tennis player in the world in 2017 as per WTA?\n\tA.\tSerena Williams\n\tB.\tSimona Halep\n\tC.\tGarbine Muguruza\n\tD.\tVictoria Azarenka\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(toupper(choice[9]) == 'B')
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
    printf("11.Who had started the International Women's Boxing Hall of Fame?\n\tA.\tTerri Moss\n\tB.\tSue TL Fox\n\tC.\tClaressa Shields\n\tD.\tBarbara Buttrick\n");
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
    printf("12.Where are the headquarters of International Gymnastics Federation?\n\tA.\tEngland\n\tB.\tGermany\n\tC.\tSwitzerland\n\tD.\tFrance\n");
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
    printf("13.Which is the governing body of Cycling sport in the world?\n\tA.\tCycling Association of the World\n\tB.\tWorld Cycling Federation\n\tC.\tInternational Cycling Union\n\tD.\tInternational Cycling Association\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(toupper(choice[12]) == 'C')
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
    printf("14.Who is the current chairman of ICC?\n\tA.\tJagmohan Dalmiya\n\tB.\tShashank Manohar\n\tC.\tRajiv Shukla\n\tD.\tDave Richardson\n");
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
    printf("15.When was the first induction ceremony held by the International Women's Boxing Hall of Fame?\n\tA.\t2013\n\tB.\t2014\n\tC.\t2015\n\tD.\t2016\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(toupper(choice[14]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");}
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
    fprintf(ptr, "%d\t\t%d\t\tSPORTS\n",s_num,score);
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