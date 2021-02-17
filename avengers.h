//Contains questions on movies/avengers
//first 7 questions are of national level and 8 are of global level
#include<stdio.h>

int avengers()
{
    int score = 0;
    char choice[15];
    printf("1.Both Iron Man and Doctor Strange actors played which identical role outside the MCU?\n\tA.\tWillie Wonka\n\tB.\tDracula\n\tC.\tSherlock Holmes\n\tD.\tJack the Ripper\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(toupper(choice[0]) == 'C')
    {score = score+100;}
    printf("2.Before turning whitish-blonde, what was Natasha Romanoff's original hair color?\n\tA.\tBrown\n\tB.\tBlack\n\tC.\tRed\n\tD.\tPurple\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(toupper(choice[1]) == 'C')
    {score = score+100;}
    printf("3.They don't really mention it out loud in the films, but what is Wanda Maximoff's superhero name?\n\tA.\tJessica Jones\n\tB.\tWasp\n\tC.\tScarlet Witch\n\tD.\tValkyrie\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(toupper(choice[2]) == 'C')
    {score = score+100;}
    printf("4.What do you call that gadget which Nick Fury used to contact Captain Marvel?\n\tA.\tPager\n\tB.\tWalkie-talkie\n\tC.\tiPad\n\tD.\tNokia phone\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(toupper(choice[3]) == 'A')
    {score = score+100;}
    printf("5.Can you recall which fallen hero said 'I don't feel so good' during The Snap?\n\tA.\tDoctor Strange\n\tB.\tWar Machine\n\tC.\tBlack Panther\n\tD.\tSpider-Man\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(toupper(choice[4]) == 'D')
    {score = score+100;}
    printf("6.What cartoony nickname did Tony Stark use for Thanos henchman Ebony Maw?\n\tA.\tPatrick\n\tB.\tSquidward\n\tC.\tSpongeBob\n\tD.\tMr. Krabs\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(toupper(choice[5]) == 'B')
    {score = score+100;}
    printf("7.Can you recall what the heroes snacked on during the first Avengers film's post-credits scene?\n\tA.\tLumpia\n\tB.\tShawarma\n\tC.\tSamosa\n\tD.\tTaco\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(toupper(choice[6]) == 'B')
    {score = score+100;}
    printf("8.This S.H.I.E.L.D. agent's death almost caused 'The Avengers' to get an R rating. Who's this unfortunate employee?\n\tA.\tAlexander Pierce\n\tB.\tJack Rollins\n\tC.\tNick Fury\n\tD.\tPhil Coulson\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(toupper(choice[7]) == 'D')
    {score = score+100;}
    printf("9.This Avenger ally originally belonged to the X-Men team. Do you know who?\n\tA.\tJ.A.R.V.I.S.\n\tB.\tPeggy Carter\n\tC.\tQuicksilver\n\tD.\tFalcon\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(toupper(choice[8]) == 'C')
    {score = score+100;}
    printf("10.Which Guardian of the Galaxy did Thor take the time to introduce to Captain America while they were already fighting enemies in 'Avengers: Infinity War'?\n\tA.\tGamora\n\tB.\tGroot\n\tC.\tStar-Lord\n\tD.\tNebula\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(toupper(choice[9]) == 'B')
    {score = score+100;}
    printf("11.Scarlett Johansson had a 'special status' while shooting 'Avengers: Age of Ultron.' What state was she in at that time?\n\tA.\tRecovering from an accident\n\tB.\tPregnant\n\tC.\tHad a major operation\n\tD.\tGetting a divorce\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(toupper(choice[10]) == 'B')
    {score = score+100;}
    printf("12.Aside from Thor, who among the original Avengers gang was worthy of handling his hammer?\n\tA.\tCaptain America\n\tB.\tThe Hulk\n\tC.\tVision\n\tD.\tIron Man\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(toupper(choice[11]) == 'A')
    {score = score+100;}
    printf("13.This Avenger friend 'hid' in Wakanda. Which one did this in vibranium land?\n\tA.\tPeter Quill\n\tB.\tScott Lang\n\tC.\tSam Wilson\n\tD.\tBucky Barnes\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(toupper(choice[12]) == 'D')
    {score = score+100;}
    printf("14.Vision came from which of the Infinity Stones?\n\tA.\tMind stone\n\tB.\tTime stone\n\tC.\tSoul stone\n\tD.\tPower stone\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(toupper(choice[13]) == 'A')
    {score = score+100;}
    printf("15.If the reality stone is red and the power stone is purple, what colors are the soul and space stones?\n\tA.\tGreen and pink\n\tB.\tBlack and green\n\tC.\tBrown and gray\n\tD.\tOrange and blue\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(toupper(choice[14]) == 'D')
    {score = score+100;}
    printf("Congrants!!! Your Score is %d\n" , score);
}