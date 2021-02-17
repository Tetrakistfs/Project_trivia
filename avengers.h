//Contains questions on movies/avengers
//first 7 questions are of national level and 8 are of global level
#include<stdio.h>

int avengers()
{
    int score = 0;
    char choice[15];
    printf("1.Both Iron Man and Doctor Strange actors played which identical role outside the MCU?\n\tA.\tWillie Wonka\n\t B.\tDracula\n\tC.\tSherlock Holmes\n\t D.\tJack the Ripper\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(choice[0] == 'C')
    {score = score+100;}
    printf("2.Before turning whitish-blonde, what was Natasha Romanoff's original hair color?\n\tA.\tBrown\n\t B.\tBlack\n\tC.\tRed\n\t D.\tPurple\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(choice[0] == 'C')
    {score = score+100;}
    printf("3.They don't really mention it out loud in the films, but what is Wanda Maximoff's superhero name?\n\tA.\tJessica Jones\n\t B.\tWasp\n\tC.\tScarlet Witch\n\t D.\tValkyrie\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(choice[0] == 'C')
    {score = score+100;}
    printf("4.What do you call that gadget which Nick Fury used to contact Captain Marvel?\n\tA.\tPager\n\t B.\tWalkie-talkie\n\tC.\tiPad\n\t D.\tNokia phone\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(choice[0] == 'A')
    {score = score+100;}
    printf("5.Can you recall which fallen hero said 'I don't feel so good' during The Snap?\n\tA.\tDoctor Strange\n\t B.\tWar Machine\n\tC.\tBlack Panther\n\t D.\tSpider-Man\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("6.What cartoony nickname did Tony Stark use for Thanos henchman Ebony Maw?\n\tA.\tPatrick\n\t B.\tSquidward\n\tC.\tSpongeBob\n\t D.\tMr. Krabs\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(choice[0] == 'B')
    {score = score+100;}
    printf("7.Can you recall what the heroes snacked on during the first Avengers film's post-credits scene?\n\tA.\tLumpia\n\t B.\tShawarma\n\tC.\tSamosa\n\t D.\tTaco\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(choice[0] == 'B')
    {score = score+100;}
    printf("8.This S.H.I.E.L.D. agent's death almost caused 'The Avengers' to get an R rating. Who's this unfortunate employee?\n\tA.\tAlexander Pierce\n\t B.\tJack Rollins\n\tC.\tNick Fury\n\t D.\tPhil Coulson\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("9.This Avenger ally originally belonged to the X-Men team. Do you know who?\n\tA.\tJ.A.R.V.I.S.\n\t B.\tPeggy Carter\n\tC.\tQuicksilver\n\t D.\tFalcon\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(choice[0] == 'C')
    {score = score+100;}
    printf("10.Which Guardian of the Galaxy did Thor take the time to introduce to Captain America while they were already fighting enemies in 'Avengers: Infinity War'?\n\tA.\tGamora\n\t B.\tGroot\n\tC.\tStar-Lord\n\t D.\tNebula\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(choice[0] == 'B')
    {score = score+100;}
    printf("11.Scarlett Johansson had a 'special status' while shooting 'Avengers: Age of Ultron.' What state was she in at that time?\n\tA.\tRecovering from an accident\n\t B.\tPregnant\n\tC.\tHad a major operation\n\t D.\tGetting a divorce\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(choice[0] == 'B')
    {score = score+100;}
    printf("12.Aside from Thor, who among the original Avengers gang was worthy of handling his hammer?\n\tA.\tCaptain America\n\t B.\tThe Hulk\n\tC.\tVision\n\t D.\tIron Man\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(choice[0] == 'A')
    {score = score+100;}
    printf("13.This Avenger friend 'hid' in Wakanda. Which one did this in vibranium land?\n\tA.\tPeter Quill\n\t B.\tScott Lang\n\tC.\tSam Wilson\n\t D.\tBucky Barnes\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("14.Vision came from which of the Infinity Stones?\n\tA.\tMind stone\n\t B.\tTime stone\n\tC.\tSoul stone\n\t D.\tPower stone\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(choice[0] == 'A')
    {score = score+100;}
    printf("15.If the reality stone is red and the power stone is purple, what colors are the soul and space stones?\n\tA.\tGreen and pink\n\t B.\tBlack and green\n\tC.\tBrown and gray\n\t D.\tOrange and blue\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("Congrants!!! Your Score is %d\n" , score);
}