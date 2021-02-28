//Contains questions on gaming
//first 5 ques are of easy, 5 of medium and next of the hard
#include<stdio.h>
int gaming()
{
    int score = 0;
    char choice[15];
    printf("\e[1;1H\e[2J");
    printf("1.NES was short for?\n\tA.\tNever Ending Simulation\n\tB.\tNew Enterprise System\n\tC.\tNot Ever Still\n\tD.\tNintendo Entertainment System\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(toupper(choice[0]) == 'D')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is D\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("2.In what game series are the Golden Rings used as Life-energy and Money?\n\tA.\tSuper Mario Bros\n\tB.\tSonic the Hedgehog\n\tC.\tHarvest Moon\n\tD.\tCeleste\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(toupper(choice[1]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("3.Who is the Elven Sword-Wielding, Green Clothed Hero in the Legend of the Zelda Series?\n\tA.\tLink\n\tB.\tKai\n\tC.\tLuigi\n\tD.\tKain\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(toupper(choice[2]) == 'A')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is A\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("4.What is the name of Mario's dinosaur sidekick?\n\tA.\tGon\n\tB.\tYoshi\n\tC.\tMushy\n\tD.\tKipo\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(toupper(choice[3]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("5.What are the professions of Mario and his brother Luigi?\n\tA.\tGarbage men\n\tB.\tDancers\n\tC.\tHeroes\n\tD.\tPlumbers\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(toupper(choice[4]) == 'D')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is D\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("6.Characters in videogames who cannot be outrightly controlled by players are acronymed as what?\n\tA.\tWoWs\n\tB.\tNPCs\n\tC.\tMMORPGs\n\tD.\tRPGs\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(toupper(choice[5]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("7.Which videogame holds the record for having the highest budget ever to produce?\n\tA.\tGrand Theft Auto 5\n\tB.\tFinal Fantasy VII\n\tC.\tStar Wars: Old Republic\n\tD.\tKingdom Hearts III\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(toupper(choice[6]) == 'A')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is A\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("8.Which item made Mario invincible in \"Super Mario Bros.\"?\n\tA.\tMushroom\n\tB.\tFire Flower\n\tC.\tStarman\n\tD.\tYoshi's Egg\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(toupper(choice[7]) == 'C')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is C\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("9.What is the name of the first-ever videogame?\n\tA.\tPong\n\tB.\tPac-Man\n\tC.\tTennis for Two\n\tD.\tAsteroids\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(toupper(choice[8]) == 'C')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is C\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("10.How many buttons were on the Original NES controller(including the D-pad)?\n\tA.\t4\n\tB.\t8\n\tC.\t10\n\tD.\t15\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(toupper(choice[9]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("11.In what series were Dracula and The Grim Reaper Recurring Villians?\n\tA.\tSoul Reaver\n\tB.\tCastlevania\n\tC.\tDark Souls\n\tD.\tBloodbourne\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(toupper(choice[10]) == 'B')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is B\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("12.What is the name of the legendary videogame designer who created the Mario franchise?\n\tA.\tFusajiro Yamauchi\n\tB.\tTetsuo Hara\n\tC.\tAlexey Pajitnov\n\tD.\tShigeru Miyamoto\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(toupper(choice[11]) == 'D')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is D\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("13.How many form does 'The Final Boss of the Legend of Dragoon' Have?\n\tA.\t3\n\tB.\t5\n\tC.\t7\n\tD.\t10\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(toupper(choice[12]) == 'C')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is C\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("14.What part of an XBOX 360 causes the \"Red Ring of Death\"?\n\tA.\tGraphics Card\n\tB.\tHeat Sink\n\tC.\tThe Processor\n\tD.\tBoth A and B\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(toupper(choice[13]) == 'D')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is D\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("15What videogame featured the first Easter egg?\n\tA.\tCentipede\n\tB.\tAsteroids\n\tC.\tSpace Invaders\n\tD.\tAdventure\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(toupper(choice[14]) == 'D')
    {
        score = score+100;
        printf("\033[0;32mCorrect Answer!!!\033[0m");
    }
    else
    {
        printf("\033[0;31mOOPS!! WRONG ANSWER\033[0m\nCorrect answer is D\n");
    }
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
    fprintf(ptr, "%d\t\t%d\t\tGAMING\n",s_num,score);
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