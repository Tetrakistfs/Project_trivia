//Contains questions on Technology
//first 5 ques are of easy, 5 of medium and next of the hard
#include<stdio.h>
char decision;
int technology()
{
    int score = 0;
    char choice[15];
    printf("\e[1;1H\e[2J");
    printf("1.Who founded Apple Computer?\n\tA.\tSheryl Sandberg\n\tB.\tSteve Jobs\n\tC.\tBill Gates\n\tD.\tSundar Pichai\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(toupper(choice[0]) == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("2.Which of these is not a kind of Computer?\n\tA.\tApple\n\tB.\tLada\n\tC.\tDell\n\tD.\tLenovo\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(toupper(choice[1]) == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("3.What Operating System did Google develop?\n\tA.\tBlackBerry OS\n\tB.\tWindows\n\tC.\tiOS\n\tD.\tAndroid\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(toupper(choice[2]) == 'D')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is D\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("4.What feature is often used to identify whether a visitor to a Web site is human or not?\n\tA.\tCAPTCHA\n\tB.\tDENDRAL\n\tC.\tGeneral Problem Solver\n\tD.\tCYC\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(toupper(choice[3]) == 'A')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is A\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("5.One byte is equivalent to how many bits?\n\tA.\t32\n\tB.\t8\n\tC.\t64\n\tD.\t12\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(toupper(choice[4]) == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("6.A network designed to allow communication within an organization is called?\n\tA.\tthe World Wide Web\n\tB.\tthe Internet\n\tC.\tan Intranet\n\tD.\ta browser\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(toupper(choice[5]) == 'C')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is C\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("7.Which of these is not a programming language?\n\tA.\tWindows 2000\n\tB.\tAda\n\tC.\tCOBOL\n\tD.\tHypertalk\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(toupper(choice[6]) == 'A')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is A\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("8.In the 1990's this company created a computer programming language called JAVA?\n\tA.\tIBM\n\tB.\tOracle Corporation\n\tC.\tSun Microsystems.inc\n\tD.\tMicrosoft Corporation\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(toupper(choice[7]) == 'C')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is C\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("9.In what year was Google founded?\n\tA.\t1995\n\tB.\t1998\n\tC.\t1989\n\tD.\t2001\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(toupper(choice[8]) == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("10.Which of these was the first large-scale electronic computer?\n\tA.\tLEO\n\tB.\tOsborne 1\n\tC.\tColossus\n\tD.\tCray-1\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(toupper(choice[9]) == 'C')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is C\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("11.How many Computer Languages are in use?\n\tA.\t20\n\tB.\t2000\n\tC.\t5000\n\tD.\t50\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(toupper(choice[10]) == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("12.Which of these is not an early computer?\n\tA.\tSAGE\n\tB.\tUNIVAC\n\tC.\tNASA\n\tD.\tENIAC\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(toupper(choice[11]) == 'C')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is C\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("13.Who created the computer programming language FORTRAN?\n\tA.\tBill Atkinson\n\tB.\tDennis Ritchie\n\tC.\tJohn Backus\n\tD.\tJohn McCarthy\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(toupper(choice[12]) == 'C')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is C\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("14.Which company released its first notebook computer, \"the 316LT\", in 1989?\n\tA.\tDell\n\tB.\tHewlett-Packard\n\tC.\tApple\n\tD.\tLenovo\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(toupper(choice[13]) == 'A')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is A\n");}
    printf("Moving to next question ");
        for(int i=2;i>0;i--)
        {
            printf("%d..", i);
            sleep(1);
        }
    printf("\e[1;1H\e[2J");
    printf("15.Which of these was the first personal computer?\n\tA.\tOsborne 1\n\tB.\tApple 1\n\tC.\tAltair\n\tD.\tApple Lisa\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(toupper(choice[14]) == 'C')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is C\n");}
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
    fprintf(ptr, "%d\t\t%d\t\tTechnology\n",s_num,score);
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