#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>

char user_input[];
int main()
{
    system("cls");
    printf("Welcome to AI chatBot. \n");
    
    while(1)
    {
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "exit")== 0)
        {
            system("cls");
            printf("Bot ==> Ok sir... \n");
            break;
        }
        else if (strcmp(user_input, "chatbot") == 0)
        {
            printf("Bot ==> Welcome to chatBot\n\tHow may i help you? \n");
        }
        else if (srtcmp(user_input,"good morning bot") == 0)
        {
            printf("Bot ==> Good morning sir \n");
        }
        else if (strcmp(user_input, "good afternoon bot") == 0)
        {
            printf("Bot ==> Good afternoon sir\n");
        }
        else if (strcmp(user_input, "good evening bot") == 0)
        {
            printf("Bot ==> Good evening sir\n");
        }
        else
        {
            printf("cool");
        }
    }
}