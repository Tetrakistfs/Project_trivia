//Contains questions on current affairs
//first 7 questions are of national level and 8 are of global level
#include<stdio.h>

int chit_chat()
{
    int score = 0;
    char choice[15];
    printf("1.Which state has celebrated its foundation day on 24 January?\n\tA.\tUttar Pradesh\n\t B.\tWest Bengal\n\tC.\tKerala\n\t D.\tGoa\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(choice[0] == 'A')
    {score = score+100;}
    printf("2.Who has been appointed as the next High Commissioner of India to Malawi?\n\tA.\tM Venkateswar\n\t B.\tKS Trimurthi\n\tC.\tS Gopalakrishnan\n\t D.\tR Shakuntala\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(choice[0] == 'C')
    {score = score+100;}
    printf("3.Which social media platform has suspended 500 accounts for policy breach after the Indian government's request?\n\tA.\tFacebook\n\t B.\tTwitter\n\tC.\tInstagram\n\t D.\tWhatsApp\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(choice[0] == 'B')
    {score = score+100;}
    printf("4.Which organization has signed 2 separate MoUs with the smart factory, IISc, and SMDDC for creating the digital transformation labs in India?\n\tA.\tSiemens Ltd\n\t B.\tPhilips\n\tC.\tBosch\n\t D.\tLG\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(choice[0] == 'A')
    {score = score+100;}
    printf("5.Who was the co-chair of the first India-European Union High-Level Dialogue (HLD) on trade and investment?\n\tA.\tPiyush Goyal\n\t B.\tNarendra Singh Tomar\n\tC.\tRavi Shankar Prasad\n\t D.\tSubrahmanyam Jaishankar\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(choice[0] == 'A')
    {score = score+100;}
    printf("6.The 'National Safety Council' has been set up by which Union Ministry?\n\tA.\tMinistry of Food Processing Industries\n\t B.\tMinistry of External Affairs\n\tC.\tMinistry of Finance\n\t D.\tMinistry of Labour\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("7.How many states have completed the reforms in 'Ease of Doing Business' as stipulated by the Ministry of Finance?\n\tA.\t20\n\t B.\t12\n\tC.\t10\n\t D.\t8\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(choice[0] == 'B')
    {score = score+100;}
    printf("8.Which country is poised to become the second country in the world to land successfully on Mars?\n\tA.\tUAE\n\t B.\tIndia\n\tC.\tJapan\n\t D.\tChina\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("9.Which Arab nation's space probe successfully entered the orbit of Mars?\n\tA.\tSaudi Arabia\n\t B.\tUAE\n\tC.\tQatar\n\t D.\tBahrain\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(choice[0] == 'B')
    {score = score+100;}
    printf("10.Which nation has received USD 200 million from World Bank for safe water and sanitation services?\n\tA.\tPakistan\n\t B.\tNepal\n\tC.\tIndia\n\t D.\tBangladesh\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("11.Which country is set to build the world's largest wind power plant?\n\tA.\tSouth Korea\n\t B.\tSingapore\n\tC.\tGermany\n\t D.\tIndia\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(choice[0] == 'A')
    {score = score+100;}
    printf("12.Which Indian company has partnered with UNICEF to distribute vaccines around the world?\n\tA.\tBiocon\n\t B.\tSerum Institute of India\n\tC.\tBharat Biotech\n\t D.\tDr Reddys\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(choice[0] == 'B')
    {score = score+100;}
    printf("13.Name the first-ever female who has been appointed as the Director-General of the World Trade Organization?\n\tA.\tChukwuka Okonjo\n\t B.\tPascal Lamy\n\tC.\tIkemba Iweala\n\t D.\tNgozi Okonjo-Iweala\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("14.India has participated with which country in the first meeting of the Joint Working Group in the field of Renewable Energy?\n\tA.\tBahrain\n\t B.\tFrance\n\tC.\tJapan\n\t D.\tUSA\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(choice[0] == 'A')
    {score = score+100;}
    printf("15.Which company has been chosen by NASA for its SPHEREx Mission to perform an all-sky survey?\n\tA.\tBlue Origin\n\t B.\tSpaceX\n\tC.\tBoeing\n\t D.\tNational Aeronautics and Space Administration\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(choice[0] == 'D')
    {score = score+100;}
    printf("Congrants!!! Your Score is %d\n" , score);
}