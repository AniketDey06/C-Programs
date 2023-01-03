#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

int main()
{
    system("cls");
    int playerscore=0,comscore=0,temp,comch,yourch,count=0;
    char urchar,comchar;
    char rps[]={'r','p','s'};

    printf("\n\t**Welcome to Rock,paper,scissor Game**");
    while (1)
    {
        int n=3;
        srand(time(NULL));
        comch = rand()%n;
        comchar=rps[comch];

        printf("\n");
        printf("\n\t\tEnter [1] for Rock.");
        printf("\n\t\tEnter [2] for Paper.");
        printf("\n\t\tEnter [3] for Scissor.");
        printf("\n\t\tEnter [0] for Quit.");
        printf("\n\t\tEnter your choice: ");
        scanf("%d",&temp);

        //Exit part
        if (temp==0)
        {
            printf("\n\t\tExited the Game.");
            break;
        }
        //Invalid part
        else if (temp<0||temp>3)
        {
            printf("\n\t\tInvalid input.");
            continue;
        }

        urchar=rps[temp-1];
        //Wining part
        count++;
        if(urchar =='r' && comchar=='s')
        {
            printf("\n\tYou chose Rock and CPU chose Scissor.");
            printf("\n\t\tYou won!!");
            playerscore++;
        }
        else if(urchar =='p' && comchar=='r')
        {
            printf("\n\tYou chose Paper and CPU chose Rock.");
            printf("\n\t\tYou won!!");
            playerscore++;
        }
        else if(urchar =='s' && comchar=='p')
        {
            printf("\n\tYou chose Scissor and CPU chose Paper.");
            printf("\n\t\tYou won!!");
            playerscore++;
        }
        //Losing Part
        else
        {
            if(urchar =='r' && comchar=='p')
            {
                printf("\n\tYou chose Rock and CPU chose Paper.");
                printf("\n\t\tSo You Lost!!");
                comscore++;
            }
            else if(urchar =='p' && comchar=='s')
            {
                printf("\n\tYou chose Paper and CPU chose Scissor.");
                printf("\n\t\tSo You Lost!!");
                comscore++;
            }
            else if(urchar =='s' && comchar=='r')
            {
                printf("\n\tYou chose Scissor and CPU chose Rock.");
                printf("\n\t\tSo You Lost!!");
                comscore++;
            }
            else
            {
                printf("\n\t\tIt's a draw!");
            }
        }
    }
    printf("\n\tYou win %d times  Computer win %d times",playerscore,comscore);
    printf("\n\tTotal %d times played.",count);
    getch();
    return 0;
}
