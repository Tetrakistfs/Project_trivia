//Contains questions on anime
//first 5 questions are easy,next are a normal and the rest are difficult
#include<stdio.h>
char decision;
int score;
int anime()
{
    char choice[15];
    printf("\e[1;1H\e[2J");
    printf("1.Which anime also became a popular trading card game and one of the first augmented reality games to hit the market?\n\tA.\tPokemon\n\tB.\tCase Closed\n\tC.\tMagi\n\tD.\tKill la Kill\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(toupper(choice[0]) == 'A')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is A\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");        
    printf("2.\"Fullmetal Alchemist\" is an action-packed story centering on two brothers who lost more than one limb in a ritual to do what?\n\tA.\tgrow their power exponentially\n\tB.\tclose the portal to Hell\n\tC.\tcreate a homonculus\n\tD.\tbring back their dead mother\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(toupper(choice[1]) == 'D')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is D\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("3.Which anime features a protagonist able to kill instantly by writing a person's name down in his notebook?\n\tA.\tDeath Note\n\tB.\tClannad\n\tC.\tFull Metal Panic\n\tD.\tHellsing\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(toupper(choice[2]) == 'A')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is A\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");    
    printf("4.Around what concept is the hit show \"One Punch Man\" designed?\n\tA.\ta hero who defeats his enemies with a single punch\n\tB.\ta hero who is knocked out after taking one blow\n\tC.\ta hero who saves the universe with his flurry of punches\n\tD.\ta hero who only kicks his enemies to defeat them\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(toupper(choice[3]) == 'A')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is A\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("5.Which famous anime produced the term \"Super Saiyan\"?\n\tA.\tBerserk\n\tB.\tDragon Ball Z\n\tC.\tToradora\n\tD.\tSoul eater\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(toupper(choice[4]) == 'B')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is B\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("6.In \"Naruto,\" the main character (a ninja) wears what color?\n\tA.\tbright blue\n\tB.\twhite\n\tC.\tmuted red\n\tD.\tbright orange\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(toupper(choice[5]) == 'D')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is D\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("7.In which Miyazaki film do the characters search for an ancient floating castle?\n\tA.\tPorco Rosso\n\tB.\tMy Neighbor Totoro\n\tC.\tNausicaa of the Valley of the Wind\n\tD.\tCastle in the Sky\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(toupper(choice[6]) == 'D')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is D\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("8.what kind of person Naruto is?\n\tA.\tA ninja\n\tB.\tA knight\n\tC.\tA sumrai\n\tD.\tA tree surgeon\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(toupper(choice[7]) == 'A')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is A\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("9.What is the last name of Edward and Alphonse in the Fullmetal Alchemist series?\n\tA.\tAkerman\n\tB.\tElric\n\tC.\tJeager\n\tD.\tYagami\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(toupper(choice[8]) == 'B')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is B\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("10.Who is the author of the \"Attack on Titan manga\"?\n\tA.\tHajime Isayama\n\tB.\tNazaba Suzuki\n\tC.\tShinji Higuchi\n\tD.\tNazaba Suzuki\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(toupper(choice[9]) == 'A')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is C\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("11.Which shinigami dropped his notebook in the human world?\n\tA.\tGrell Sutcliff\n\tB.\tRem\n\tC.\tRyuk\n\tD.\tImiyer\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(toupper(choice[10]) == 'C')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is C\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("12.What two companies currently hold copyrights to \"Dragon Ball\", \"Dragon Ball Z\", and \"Dragon Ball GT\"\n\tA.\tPioneer And Bird\n\tB.\tToei And Akira Toriyama\n\tC.\tFunimation And Toei\n\tD.\tFunimation And Pioneer\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(toupper(choice[11]) == 'C')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is C\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("13.For most of the Hundred Year War, where was Avatar Aang in the series \"Avatar\"?\n\tA.\tIn the bookies\n\tB.\tDoing his big shop\n\tC.\tIn a dark Cave\n\tD.\tFrozen in an iceberg\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(toupper(choice[12]) == 'D')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is D\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("14.What is the name of Great Uncle \"Grunkle\" Stan’s shack in \"Gravity falls\".?\n\tA.\tThe Mystery Shack\n\tB.\tThe Misery Shack\n\tC.\tThe History Shack\n\tD.\tThe House of Horrors\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(toupper(choice[13]) == 'A')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is A\n");
    }
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("15.What is 'anime' the Japanese word for?\n\tA.\tCartoon\n\tB.\tDrawing\n\tC.\tStory\n\tD.\tAnimation\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(toupper(choice[14]) == 'D')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is D\n");
    }
    if(score>1000)
    {
        printf("Congrants!!! Your Score is %d\n" , score);
        printf("You Rocked it!!\n");
    }
    else if(score>500)
    {
        printf("Congrants!!! Your Score is %d\n" ,score);
        printf("Good Performance\n");
    }
    else
    {
        printf("Your Score is %d\n" ,score);
        printf("Better luck next time\n");
    }
    FILE * ptr;
    ptr = fopen("prev_scores.txt", "a");
    fprintf(ptr, "%d\t\t%d\t\tAnime\n",count,score);
    count = count+1;
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