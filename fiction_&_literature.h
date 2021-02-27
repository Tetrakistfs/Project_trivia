//Contains questions on fictions and novels
//first 5 ques are of easy, 5 of medium and next of the hard
#include<stdio.h>
#include<time.h>
int quit();

int fiction()
{
    int score = 0;
    char choice[15];
    printf("\e[1;1H\e[2J");
    printf("1.The Invisible Man , a classic science fiction novel, was written by what author?\n\tA.\tRobert Louis Stevenson\n\tB.\tH. G. Wells\n\tC.\tOscar Wilde\n\tD.\tJules Vern\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(toupper(choice[0]) == 'B')
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
    printf("2.Who was the author of the famous storybook 'Alice's Adventures in Wonderland'?\n\tA.\tRudyard Kipling\n\tB.\tJohn Keats\n\tC.\tLewis Carroll\n\tD.\tH. G. Wells\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(toupper(choice[1]) == 'C')
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
    printf("3.Who wrote 'Where ignorance is bliss, it is folly to be wise'?\n\tA.\tBrowning\n\tB.\tMarx\n\tC.\tShakespeare\n\tD.\tKipling\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(toupper(choice[2]) == 'C')
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
    printf("4.Which is the first Harry Potter Book?\n\tA.\tHP and the Goblet of Fire\n\tB.\tHP and the Philosopher's Stone\n\tC.\tHP and the Chamber of secrets\n\tD.\tHP and the Prisoner of Azkaban\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(toupper(choice[3]) == 'B')
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
    printf("5.In Alice in Wonderland, which character is most often seen weeping?\n\tA.\tBill the Lizard\n\tB.\tthe Dormouse\n\tC.\tthe Gryphon\n\tD.\tthe Mock Turtle\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(toupper(choice[4]) == 'D')
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
    printf("6.From Gulliver's Travels, in what year was Lemuel Gulliver ship wrecked on Lilliput?\n\tA.\t1599\n\tB.\t1699\n\tC.\t1799\n\tD.\t1899\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(toupper(choice[5]) == 'B')
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
    printf("7.'Jane Eyre' was written by which Bronte sister?\n\tA.\tAnne\n\tB.\tCharlotte\n\tC.\tEmily\n\tD.\tNone\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(toupper(choice[6]) == 'B')
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
    printf("8.Which one of the following was not one of The Three Musketeers?\n\tA.\tAramis\n\tB.\tAthos\n\tC.\tD' Artagnan\n\tD.\tPorthos\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(toupper(choice[7]) == 'C')
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
    printf("9.In the book 'The Lord of the Rings', who or what is Bilbo?\n\tA.\tDwarf\n\tB.\tWizard\n\tC.\tHobbit\n\tD.\tTroll\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(toupper(choice[8]) == 'C')
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
    printf("10.Name the book which open with the line 'All children, except one grew up'?\n\tA.\tThe Railway Children\n\tB.\tWinnie the Poo\n\tC.\tThe Jungle book\n\tD.\tPeter Pan\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(toupper(choice[9]) == 'D')
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
    printf("11.In Charles Dickens's novel \"A Tale of Two Cities\", what are names of the two cities?\n\tA.\tBoston and New York\n\tB.\tRome and Venice\n\tC.\tBrussels and Moscow\n\tD.\tLondon and Paris\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(toupper(choice[10]) == 'D')
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
    printf("12.Where would one find Munchkin Country, Quadling Country, Gillikin Country and 'Winkie Country'?\n\tA.\tThe Land of Oz\n\tB.\tMiddle Earth\n\tC.\tNever-Never land\n\tD.\tTransylvania\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(toupper(choice[11]) == 'A')
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
    printf("13.According to the book \"Lost Horizon\", where was the fictional city  of Shangri-La located?\n\tA.\tan island in the South Pacific\n\tB.\tthe mountains of Tibet\n\tC.\tthe jungles of Africa\n\tD.\tthe jungles of Brazil\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(toupper(choice[12]) == 'B')
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
    printf("14.In The Phantom Tollbooth, a Norton Juster's  1962 novel, the city of Dictionopolis is the rival of what other city?\n\tA.\tAlphaville\n\tB.\tAudiopolis\n\tC.\tDigitopolis\n\tD.\tMetropolis\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(toupper(choice[13]) == 'C')
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
    printf("15.In a Mark twain novel, a mechanic from what New England state went back in time and visited King Arthur's court?\n\tA.\tMassachusetts\n\tB.\tConnecticut\n\tC.\tRhode Island\n\tD.\tNew Hampshire\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(toupper(choice[14]) == 'B')
    {
        score = score+100;
        printf("Correct Answer!!!");
    }
    else
    {
        printf("OOPS!! WRONG ANSWER\nCorrect answer is B\n");
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
    int s_num;
    FILE * ptr = NULL;;
    FILE * num = fopen("serial_number.txt" , "r");
    fscanf(num, "%d", &s_num);
    fclose(num);
    ptr = fopen("prev_scores.txt", "a");
    fprintf(ptr, "%d\t\t%d\t\tBOOKWORM\n",s_num,score);
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
