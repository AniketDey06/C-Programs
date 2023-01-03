//Number Guesser
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int comnum,usernum;
    int high=100,low=1;
    srand(time(NULL));
    comnum = (rand()%(high-low+1))+low;
    int count = 0;

    printf("\n=================================================\n");
    printf("Computer is taking a random number between(0-100).\n");
    printf("And you have to guess the right number.\n");
    printf("If you want to exit the game Enter '0'.\n");
    
    while (1)
    {
        printf("\nGuess the number between %d-%d: ",low,high);
        scanf("%d",&usernum);
        //exit code
        if(usernum==0)
        {
            printf("Exited.\n");
            break;
        }
        //Guess code
        count++;
        if (comnum==usernum)
        {
            printf("\nYou Guessed the right number.");
            break;
        }
        else if (comnum<usernum)
        {
            printf("Your number is greter.\n");
            if (usernum<high)
            {
                high=usernum;
            }
        }
        else
        {
            printf("Your number is small.\n");
            if (usernum>low)
            {
                low=usernum;
            }
        }
    }
    printf("\nThe number is %d.",comnum);
    printf("\nNumber of Attempt %d\n",count);
    getch();
    return 0;
}