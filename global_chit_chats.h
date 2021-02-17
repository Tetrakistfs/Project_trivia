//Contains questions on current affairs
//first 7 questions are of national level and 8 are of global level
#include<stdio.h>

int chit_chat()
{
    int score = 0;
    char choice[15];
    printf("1.Which state has celebrated its foundation day on 24 January?\n\tA.\tUttar Pradesh\n\tB.\tWest Bengal\n\tC.\tKerala\n\tD.\tGoa\n");
    printf("Choice ->");
    scanf(" %c", &choice[0]);
    if(choice[0] == 'A')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is A\n");}
    printf("\e[1;1H\e[2J");
    printf("2.Who has been appointed as the next High Commissioner of India to Malawi?\n\tA.\tM Venkateswar\n\tB.\tKS Trimurthi\n\tC.\tS Gopalakrishnan\n\tD.\tR Shakuntala\n");
    printf("Choice ->");   
    scanf(" %c", &choice[1]);
    if(choice[1] == 'C')
    { 
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is C\n");}
    printf("\e[1;1H\e[2J");
    printf("3.Which social media platform has suspended 500 accounts for policy breach after the Indian government's request?\n\tA.\tFacebook\n\tB.\tTwitter\n\tC.\tInstagram\n\tD.\tWhatsApp\n");
    printf("Choice ->");
    scanf(" %c", &choice[2]);
    if(choice[2] == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("\e[1;1H\e[2J");
    printf("4.Which organization has signed 2 separate MoUs with the smart factory, IISc, and SMDDC for creating the digital transformation labs in India?\n\tA.\tSiemens Ltd\n\tB.\tPhilips\n\tC.\tBosch\n\tD.\tLG\n");
    printf("Choice ->");
    scanf(" %c", &choice[3]);
    if(choice[3] == 'A')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is A\n");}
    printf("\e[1;1H\e[2J");
    printf("5.Who was the co-chair of the first India-European Union High-Level Dialogue (HLD) on trade and investment?\n\tA.\tPiyush Goyal\n\tB.\tNarendra Singh Tomar\n\tC.\tRavi Shankar Prasad\n\tD.\tSubrahmanyam Jaishankar\n");
    printf("Choice ->");
    scanf(" %c", &choice[4]);
    if(choice[4] == 'A')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is A\n");}
    printf("\e[1;1H\e[2J");
    printf("6.The 'National Safety Council' has been set up by which Union Ministry?\n\tA.\tMinistry of Food Processing Industries\n\tB.\tMinistry of External Affairs\n\tC.\tMinistry of Finance\n\tD.\tMinistry of Labour\n");
    printf("Choice ->");
    scanf(" %c", &choice[5]);
    if(choice[5] == 'D')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is D\n");}
    printf("\e[1;1H\e[2J");
    printf("7.How many states have completed the reforms in 'Ease of Doing Business' as stipulated by the Ministry of Finance?\n\tA.\t20\n\tB.\t12\n\tC.\t10\n\tD.\t8\n");
    printf("Choice ->");
    scanf(" %c", &choice[6]);
    if(choice[6] == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("\e[1;1H\e[2J");
    printf("8.Which country is poised to become the second country in the world to land successfully on Mars?\n\tA.\tUAE\n\tB.\tIndia\n\tC.\tJapan\n\tD.\tChina\n");
    printf("Choice ->");
    scanf(" %c", &choice[7]);
    if(choice[7] == 'D')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is D\n");}
    printf("\e[1;1H\e[2J");
    printf("9.Which Arab nation's space probe successfully entered the orbit of Mars?\n\tA.\tSaudi Arabia\n\tB.\tUAE\n\tC.\tQatar\n\tD.\tBahrain\n");
    printf("Choice ->");
    scanf(" %c", &choice[8]);
    if(choice[8] == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("\e[1;1H\e[2J");
    printf("10.Which nation has received USD 200 million from World Bank for safe water and sanitation services?\n\tA.\tPakistan\n\tB.\tNepal\n\tC.\tIndia\n\tD.\tBangladesh\n");
    printf("Choice ->");
    scanf(" %c", &choice[9]);
    if(choice[9] == 'D')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is D\n");}
    printf("\e[1;1H\e[2J");
    printf("11.Which country is set to build the world's largest wind power plant?\n\tA.\tSouth Korea\n\tB.\tSingapore\n\tC.\tGermany\n\tD.\tIndia\n");
    printf("Choice ->");
    scanf(" %c", &choice[10]);
    if(choice[10] == 'A')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is A\n");}
    printf("\e[1;1H\e[2J");
    printf("12.Which Indian company has partnered with UNICEF to distribute vaccines around the world?\n\tA.\tBiocon\n\tB.\tSerum Institute of India\n\tC.\tBharat Biotech\n\tD.\tDr Reddys\n");
    printf("Choice ->");
    scanf(" %c", &choice[11]);
    if(choice[11] == 'B')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is B\n");}
    printf("\e[1;1H\e[2J");
    printf("13.Name the first-ever female who has been appointed as the Director-General of the World Trade Organization?\n\tA.\tChukwuka Okonjo\n\tB.\tPascal Lamy\n\tC.\tIkemba Iweala\n\tD.\tNgozi Okonjo-Iweala\n");
    printf("Choice ->");
    scanf(" %c", &choice[12]);
    if(choice[12] == 'D')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is D\n");}
    printf("\e[1;1H\e[2J");
    printf("14.India has participated with which country in the first meeting of the Joint Working Group in the field of Renewable Energy?\n\tA.\tBahrain\n\tB.\tFrance\n\tC.\tJapan\n\tD.\tUSA\n");
    printf("Choice ->");
    scanf(" %c", &choice[13]);
    if(choice[13] == 'A')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is A\n");}
    printf("\e[1;1H\e[2J");
    printf("15.Which company has been chosen by NASA for its SPHEREx Mission to perform an all-sky survey?\n\tA.\tBlue Origin\n\tB.\tSpaceX\n\tC.\tBoeing\n\tD.\tNational Aeronautics and Space Administration\n");
    printf("Choice ->");
    scanf(" %c", &choice[14]);
    if(choice[14] == 'D')
    {
        score = score+100;
        printf("CORRECT ANSWER!!!!");
    }
    else
    {printf("oops!!WRONG ANSWER\nCorrect answer is D\n");}
    printf("Congrants!!! Your Score is %d\n" , score);
}