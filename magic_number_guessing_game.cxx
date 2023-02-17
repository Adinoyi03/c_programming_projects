#include <stdio.h>

int main()
{
    printf("\t\t\tWARNING!!! \n\tEntering a character other than a number \n\t\twill result in an error.\n\n\n");
    int guess_number;
    int guess_limit;
    int magic_number;
    int i;
    
    guess_limit=5;
    magic_number=0;
    for (i =1; i <= guess_limit; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &guess_number);
        if (guess_number == magic_number && i < guess_limit)
        {
            printf("congratulations!!! \nYou won after %d number\(s\) of guess\(s\)", i);
            break;
        }
        else if (guess_number != magic_number && i < guess_limit)
        {
            printf("Wrong guess, Try again \n");
        }
        else
        {
            printf("You Lost after %d number\(s\) of guess\(s\)", i);
        }
      
    }
}
    