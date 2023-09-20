//FORTUNE TELLER GAME
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(void) {
  int i, number, c, n, A=15, B=25, C=20, D=45, E=50, F=35, G=10, H=89,I=75, J=5, K=90, L=10, M=65, N=85, O=55, P=95, Q=40, R=70, S=80, T=77,U=99, V=100, W=20, X=54, Y=33, Z=63, num[100], l, percentage;
	char k, j;
 srand(time(NULL));
 
  printf("Welcome to Nathalie's machine of fortune. Seeking answers about your future?\n");
   printf("\nPlay our four part game to receive insight on your upcoming adventures.\n");
  printf("\nFor the first part of the game, enter a number to receive a fortune.\n");
  printf("\n CHOOSE ONE NUMBER:\n");
    for(l=0;l<10;l++)
    {
      num[l]=l+1;
      printf("%d ", num[l]);
    }
    printf("\n");
  scanf("%d", &i);
  
  if(i==1)
    printf("\nYour talents will be recognized and suitably rewarded. \n");
  else if(i==2)
    printf("\nA pleasant surprise is waiting for you. \n");
  else if(i==3)
    printf("\nA dubious friend may be an enemy in camouflage. \n");
  else if(i==4)
    printf("\nA hunch is creativity trying to tell you something. \n");
  else if(i==5)
    printf("\nFailure is the chance to do better next time. \n");
  else if(i==6)
    printf("\nA happy life is just in front of you. \n");
  else if(i==7)
    printf("\nIts time to get moving, your spirits will lift accordingly. \n");
  else if(i==8)
    printf("\nResting well is as important as working hard. \n");
  else if(i==9)
    printf("\nSuccess is a journey, not a destination. \n");
  else if(i==10)
    printf("\nTo the world you may be one person, but to one person you may be the world. \n");
  else 
      if(i>10)
        printf("\nNumber entered is higher than the range that is given, please try again.\n");
      else 
       printf("\nNumber entered is lower than the range that is given, please try again\n");

  printf("\nFor the second part of the game, try to guess one of our three winning numbers to earn a prize.\n"); 
  printf("\nEnter any number from the set given:\n");

  do
   {
     for(l=0;l<100;l++)
    {
      num[l]=l+1;
      printf("%d ", num[l]);
    }
    printf("\n");
    scanf("%d", &number);
    switch(number)
    {
      case(28):
       printf("\nYou entered the winning number, here is 100 coins redeemable for prizes at the counter!\n");
        break;
      case(37):
        printf("\nYou entered the winning number, here is 100 coins redeemable for prizes at the counter!\n");
        break;
      case(45):
        printf("\nYou entered the winning number, here is 100 coins redeemable for prizes at the counter!\n");
        break;
      default:
        if(number>100 || number<=0)
        {
          printf("\nNumber entered was not in the range that was given please try again.\n");
        }
        else
        printf("\nYour entry was not one of our winning numbers, better luck next time.\n");
    }
   }while(number>100 || number<0);

    printf("\nThe third part of the game consists of you receiving 6 lucky numbers.\n");

    printf("\nPlease type a :) and the enter key to receive your 6 lucky numbers:\n");
     if (getchar() == '\n')
      scanf(":)");

    printf("\nHere are your six lucky numbers:\n");
    FILE * fp;
    fp = fopen("luckynumbers.txt","w");
    for (c = 1; c <= 6; c++) {
    n = rand() % 100 + 1;
    printf("%d ", n);
    fprintf(fp,"%d ", n);
    }

    printf("\n\nThe last part of the game is the percentage you and your loved one will get married.\n");
		
		do
		{
    printf("\nPlease enter your first name initial  'K' \n");
	
    scanf(" %c", &k);

		switch(k)
		{
			case 'A': printf("\nYour percentage: %d %%", A); break;
			case 'B': printf("\nYour percentage: %d %%", B); break;
			case 'C': printf("\nYour percentage: %d %%", C); break;
			case 'D': printf("\nYour percentage: %d %%", D); break;
			case 'E': printf("\nYour percentage: %d %%", E); break;
			case 'F': printf("\nYour percentage: %d %%", F); break;
			case 'G': printf("\nYour percentage: %d %%", G); break;
			case 'H': printf("\nYour percentage: %d %%", H); break;
			case 'I': printf("\nYour percentage: %d %%", I); break;
			case 'J': printf("\nYour percentage: %d %%", J); break;
			case 'K': printf("\nYour percentage: %d %%", K); break;
			case 'L': printf("\nYour percentage: %d %%", L); break;
			case 'M': printf("\nYour percentage: %d %%", M); break;
			case 'N': printf("\nYour percentage: %d %%", N); break;
			case 'O': printf("\nYour percentage: %d %%", O); break;
			case 'P': printf("\nYour percentage: %d %%", P); break;
			case 'Q': printf("\nYour percentage: %d %%", Q); break;
			case 'R': printf("\nYour percentage: %d %%", R); break;
			case 'S': printf("\nYour percentage: %d %%", S); break;
			case 'T': printf("\nYour percentage: %d %%", T); break;
			case 'U': printf("\nYour percentage: %d %%", U); break;
			case 'V': printf("\nYour percentage: %d %%", V); break;
			case 'W': printf("\nYour percentage: %d %%", W); break;
			case 'X': printf("\nYour percentage: %d %%", X); break;
			case 'Y': printf("\nYour percentage: %d %%", Y); break;
			case 'Z': printf("\nYour percentage: %d %%", Z); break;
			case '\n': break;
			default: printf("Wrong input please try again.\n");
		}
		}while(!isalpha(k));
		// isalpha() is a function to check if a character is an alphabet (ctype.h is included)
		// isalpha(k) returns 1 if k is an alphabet. Otherwise, it returns 0.

    
    
     do
		{
    printf("\n\nPlease enter your loved ones first name initial 'J' \n");

    scanf(" %c", &j);
		//Since k will contain a character, the literal has to be enclosed by single quotation marks
		// and I would suggest using switch-case, since you have several cases. I commented your code (using if-else) out.
		switch(j)
		{
			case 'A': printf("\nTheir percentage: %d %%", A); break;
			case 'B': printf("\nTheir percentage: %d %%", B); break;
			case 'C': printf("\nTheir percentage: %d %%", C); break;
			case 'D': printf("\nTheir percentage: %d %%", D); break;
			case 'E': printf("\nTheir percentage: %d %%", E); break;
			case 'F': printf("\nTheir percentage: %d %%", F); break;
			case 'G': printf("\nTheir percentage: %d %%", G); break;
			case 'H': printf("\nTheir percentage: %d %%", H); break;
			case 'I': printf("\nTheir percentage: %d %%", I); break;
			case 'J': printf("\nTheir percentage: %d %%", J); break;
			case 'K': printf("\nTheir percentage: %d %%", K); break;
			case 'L': printf("\nTheir percentage: %d %%", L); break;
			case 'M': printf("\nTheir percentage: %d %%", M); break;
			case 'N': printf("\nTheir percentage: %d %%", N); break;
			case 'O': printf("\nTheir percentage: %d %%", O); break;
			case 'P': printf("\nTheir percentage: %d %%", P); break;
			case 'Q': printf("\nTheir percentage: %d %%", Q); break;
			case 'R': printf("\nTheir percentage: %d %%", R); break;
			case 'S': printf("\nTheir percentage: %d %%", S); break;
			case 'T': printf("\nTheir percentage: %d %%", T); break;
			case 'U': printf("\nTheir percentage: %d %%", U); break;
			case 'V': printf("\nTheir percentage: %d %%", V); break;
			case 'W': printf("\nTheir percentage: %d %%", W); break;
			case 'X': printf("\nTheir percentage: %d %%", X); break;
			case 'Y': printf("\nTheir percentage: %d %%", Y); break;
			case 'Z': printf("\nTheir percentage: %d %%", Z); break;
			case '\n': break;
			default: printf("Wrong input please try again.\n");
		}
		}while(!isalpha(j));
		// isalpha() is a function to check if a character is an alphabet (ctype.h is included)
		// isalpha(k) returns 1 if k is an alphabet. Otherwise, it returns 0.

    percentage = (k * j)/100;
    printf("\n\nThis is the percentage you and your loved one wll get married : %d %%\n", percentage);
       
   printf("\n\nThank you for being curious about your future and what fate has in store for you, please come again another time!\n");
  

  return 0;
  }


