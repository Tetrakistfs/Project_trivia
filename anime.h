//Contains questions on anime
//first 5 questions are easy,next are a normal and the rest are difficult
#include<stdio.h>

int anime()
{
    int score = 0;
    char choice[15];
    printf("1.Which anime also became a popular trading card game and one of the first augmented reality games to hit the market?\n\tA.\tPokemon\n\tB.\tCase Closed\n\tC.\tMagi\n\tD.\tKill la Kill\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(toupper(choice[0]) == 'A')
    {score = score+100;}
    printf("2.\"Fullmetal Alchemist\" is an action-packed story centering on two brothers who lost more than one limb in a ritual to do what?\n\tA.\tgrow their power exponentially\n\tB.\tclose the portal to Hell\n\tC.\tcreate a homonculus\n\tD.\tbring back their dead mother\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(toupper(choice[1]) == 'D')
    {score = score+100;}
    printf("3.Which anime features a protagonist able to kill instantly by writing a person's name down in his notebook?\n\tA.\tDeath Note\n\tB.\tClannad\n\tC.\tFull Metal Panic\n\tD.\tHellsing\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(toupper(choice[2]) == 'A')
    {score = score+100;}
    printf("4.Around what concept is the hit show \"One Punch Man\" designed?\n\tA.\ta hero who defeats his enemies with a single punch\n\tB.\ta hero who is knocked out after taking one blow\n\tC.\ta hero who saves the universe with his flurry of punches\n\tD.\ta hero who only kicks his enemies to defeat them\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(toupper(choice[3]) == 'A')
    {score = score+100;}
    printf("5.Which famous anime produced the term \"Super Saiyan\"?\n\tA.\tBerserk\n\tB.\tDragon Ball Z\n\tC.\tToradora\n\tD.\tSoul eater\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(toupper(choice[4]) == 'B')
    {score = score+100;}
    printf("6.In \"Naruto,\" the main character (a ninja) wears what color?\n\tA.\tbright blue\n\tB.\twhite\n\tC.\tmuted red\n\tD.\tbright orange\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(toupper(choice[5]) == 'D')
    {score = score+100;}
    printf("7.In which Miyazaki film do the characters search for an ancient floating castle?\n\tA.\tPorco Rosso\n\tB.\tMy Neighbor Totoro\n\tC.\tNausicaa of the Valley of the Wind\n\tD.\tCastle in the Sky\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(toupper(choice[6]) == 'D')
    {score = score+100;}
    printf("8.what kind of person Naruto is?\n\tA.\tA ninja\n\tB.\tA knight\n\tC.\tA sumrai\n\tD.\tA tree surgeon\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(toupper(choice[7]) == 'A')
    {score = score+100;}
    printf("9.What is the last name of Edward and Alphonse in the Fullmetal Alchemist series?\n\tA.\tAkerman\n\tB.\tElric\n\tC.\tJeager\n\tD.\tYagami\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(toupper(choice[8]) == 'B')
    {score = score+100;}
    printf("10.What two companies currently hold copyrights to \"Dragon Ball\", \"Dragon Ball Z\", and \"Dragon Ball GT\"?\n\tA.\tPioneer And Bird\n\tB.\tToei And Akira Toriyama\n\tC.\tFunimation And Toei\n\tD.\tFunimation And Pioneer\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(toupper(choice[9]) == 'C')
    {score = score+100;}
    printf("11.Which shinigami dropped his notebook in the human world?\n\tA.\tGrell Sutcliff\n\tB.\tRem\n\tC.\tRyuk\n\tD.\tImiyer\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(toupper(choice[10]) == 'C')
    {score = score+100;}
    // printf("12.?\n\tA.\tCaptain America\n\tB.\tThe Hulk\n\tC.\tVision\n\tD.\tIron Man\n");
    // printf("Choice ->");
    // scanf(" %c", &choice[11]);
    // if(toupper(choice[11]) == 'A')
    // {score = score+100;}
    // printf("13.This Avenger friend 'hid' in Wakanda. Which one did this in vibranium land?\n\tA.\tPeter Quill\n\tB.\tScott Lang\n\tC.\tSam Wilson\n\tD.\tBucky Barnes\n");
    // printf("Choice ->");
    // scanf(" %c", &choice[12]);
    // if(toupper(choice[12]) == 'D')
    // {score = score+100;}
    // printf("14.Vision came from which of the Infinity Stones?\n\tA.\tMind stone\n\tB.\tTime stone\n\tC.\tSoul stone\n\tD.\tPower stone\n");
    // printf("Choice ->");
    // scanf(" %c", &choice[13]);
    // if(toupper(choice[13]) == 'A')
    // {score = score+100;}
    // printf("15.If the reality stone is red and the power stone is purple, what colors are the soul and space stones?\n\tA.\tGreen and pink\n\tB.\tBlack and green\n\tC.\tBrown and gray\n\tD.\tOrange and blue\n");
    // printf("Choice ->");
    // scanf(" %c", &choice[14]);
    // if(toupper(choice[14]) == 'D')
    {score = score+100;}
    printf("Congrants!!! Your Score is %d\n" , score);
}