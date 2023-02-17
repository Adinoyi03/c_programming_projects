#include <stdio.h>
#include <conio.h>
int main()
{
    int can, m;
    int can1= 0;
    int can2 = 0;
    int can3 = 0;
    int total = 0;
    int invalid = 0;
    
    printf("Your vote is your right!!!\n\n");
    while(1)
    {
        printf("Press 1 to cast your vote.\nPress 2 to Exit.\n");
        scanf("%d", &m);
        
        if (m == 1)
        {
            printf("Press 1 to vote candidate 1 \n");
            printf("Press 2 to vote candidate 2  \n");
            printf("Press 3 to vote candidate 3 \n");
        }
        else if (m == 2)
        {
            printf("Thank you.\n");
            break;
        }
        else
        {
            printf("Please enter a valid input.\n");
        }
        scanf("%d", &can);
        
        switch (can){
            case 1:
                can1+=1;
                total+=1;
                printf("You have voted  candidate 1\n");
                printf("-------------------------------------\n\n");
                break;
            case 2:
                can2+=1;
                total+=1;
                printf("You have voted candidate 2\n");
                printf("-------------------------------------\n\n");
                break;
            case 3:
                can3+=1;
                total+=1;
                printf("You have voted candidate 3\n");
                printf("-------------------------------------\n\n");
                break;
            default:
                printf("Invalid input\n");
                printf("Vote Canceled\n");
                invalid+=1;
                total+=1;
                printf("-------------------------------------\n\n");
                break;
        }
    }
    printf("\n\n------------------------------------------------------------\n");
    printf("ELECTION RESULT\n");
    printf("---------------\n");
    printf("Candidate 1 has %d number of votes.\n", can1);
    printf("Candidate 2 has %d number of votes.\n", can2);
    printf("Candidate 3 has %d number of votes.\n", can3);
    printf("Total number of invalid votes is %d\n", invalid);
    printf("Total number of votes casted is %d\n", total);
    
    printf("\n\n------------------------------------------------------------\n");
    if (can1 > can2 && can1> can3)
    {
            printf("Candidate 1 won the election.\n");
            printf("A big CONGRATULATIONS!!! to you.\n");
    }
    else if(can2 > can1 && can2 > can3)
    {
        printf ("Candidate 2 won the election.\n");
        printf("A big CONGRATULATIONS!!! to you.\n");
    }
    else if (can3 > can1 && can3 > can2)
    {
        printf("Candidate 3 won the election.\n");
        printf("A big CONGRATULATIONS!!! to you.\n");
    }
    else
    {
        if (can1 == can2)
        {
            printf("There is a tie between Candidate 1 and Candidate 2\n");
            printf("A fresh election should be conducted for them.\n");
        }
        else if (can1 == can3)
        {
            printf("There is a tie between Candidate 1 and Candidate 3\n");
            printf("A fresh election should be conducted for them.\n");
        }
        else
        {
            printf("There is a tie between Candidate 2 and Candidate 3.\n");
            printf("A fresh election should be conducted for them.\n");
        }
    }
    return 0;
}