#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int userchoice, compchoice;
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    
       srand(time(NULL));
    
    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Let's Start the Game!\n");
    printf("Choose any one of the following options:\n");
    printf("1. Rock\n");
    printf("2. Paper\n"); 
    printf("3. Scissors\n");
    
    printf("Enter your choice from 1 to 3:\n");
    scanf("%d", &userchoice);
       compchoice=rand() % 3 + 1;
    
    //Display of choices
    printf("You chose: %s\n", choices [userchoice - 1]);
    printf("Computer chose: %s\n", choices [compchoice - 1]);
    
    // winner declaration
    if (userchoice==compchoice) 
    {
      printf("It's tie!\n");
    } 
    else if ((userchoice == 1 && compchoice == 3) || 
             (userchoice == 2 && compchoice == 1) ||
             (userchoice == 3 && compchoice == 2))
    {
      printf("You win!\n");
    }
    else 
    {
      printf("You lose!\n");
    }
    return 0;
}
