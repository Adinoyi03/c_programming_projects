#include <stdio.h>
int main()
{
	char first_name[80];
	char last_name[80];
	int date_of_birth,user_input;
	int pin, transaction_pin1, transaction_pin2, saved_pin, account_number;
	float balance, withdraw,transfer, deposite, check_balance;
	balance = 1000.00;
	saved_pin = 0000;
	
	printf("Wellcome to Adinoyi banking services.\n How may we help you?\n");
	printf("\vEnter 1 to create an account.\nEnter 2 if you are already a user.\n");
	scanf("%d", &user_input);
	if (user_input==1)
	{
	    printf("Enter first name\n");
	    scanf("%s", &first_name);
	    printf("Enter last name\n");
	    scanf("%s", &last_name);
	    printf("Create your transaction pin\n");
	    scanf("%d", &transaction_pin1);
	    printf("Confirm the pin. Enter the pin again.\n");
	    scanf("%d", &transaction_pin2);
	    if (transaction_pin1 != transaction_pin2)
	    {
	        printf("The pin does not match.\n Start again.\n");
	       
	    }
	    else
	    {
	        printf("\vCongratulations!!! ");
	        printf("%s ", first_name);
	        printf("%s\n", last_name);
	        printf("You are now a registered user.\nYou have recieved a BONUS of $1000.00 as a welcome gift.\nAdinoyi is dedicated to making you richer.\n");
	        printf("\vEnter 1 to check balance.\nEnter 2 to deposite.\nEnter 3 to withdraw\nEnter 4 to transfer\n");
	        scanf("%d", &user_input);
	        switch(user_input)
	        {
	            case 1:
	               printf("Your balance is $%5.2f", balance);
	               break;
	            case 2:
	               printf("Enter amount to deposite\n");
	               scanf("%f", &deposite);
	               balance += deposite;
	               printf("You have successfuly deposited $%5.2f and your balance is $%5.2f", deposite, balance);
	               printf("\n\nThank you for banking with us.");
	               
	               break;
	            case 3:
	               printf("Enter amount to withdraw\n");
	               scanf("%f", &withdraw);
	               balance -= withdraw;
	               printf("You have successfuly withdrawn $%5.2f from your account and your balance is now $%5.2f", withdraw, balance);
	               printf("\n\nThank you for banking with. Do enjoy your day");
	               break;
	            case 4:
	               printf("Enter amount to transfer\n");
	               scanf("%f", &transfer);
	               printf("Enter recipient account number\n");
	               scanf("%d", &account_number);
	               balance -=transfer;
	               printf("You have successfuly transfered $%5.2f to a recipient account number %d", transfer, account_number);
	               printf("\nYour balance is $%5.2f", balance);
	               printf("\n\nThank you for banking with us");
	               break;
	            default:
	            printf("Enter a valid user input");
	        }
	        
	    }
	    
	}
	else
	{
	    printf("Input your pin to enter your account\n");
	    scanf("%d", &pin);
	    if (pin != saved_pin)
	    {
	        printf("wrong pin start again");
	    }
	    else
	    {
	        printf("Welcome back\n\v");
	        printf("\vEnter 1 to check balance.\nEnter 2 to deposite.\nEnter 3 to withdraw\nEnter 4 to transfer\n");
	        scanf("%d", &user_input);
	        switch(user_input)
	        {
	            case 1:
	               printf("Your balance is $%5.2f", balance);
	               break;
	            case 2:
	               printf("Enter amount to deposite\n");
	               scanf("%f", &deposite);
	               balance += deposite;
	               printf("You have successfuly deposited $%5.2f and your balance is $%5.2f", deposite, balance);
	               printf("\n\nThank you for banking with us.");
	               
	               break;
	            case 3:
	               printf("Enter amount to withdraw\n");
	               scanf("%f", &withdraw);
	               balance -= withdraw;
	               printf("You have successfuly withdrawn $%5.2f from your account and your balance is now $%5.2f", withdraw, balance);
	               printf("\n\nThank you for banking with. Do enjoy your day");
	               break;
	            case 4:
	               printf("Enter amount to transfer\n");
	               scanf("%f", &transfer);
	               printf("Enter recipient account number\n");
	               scanf("%d", &account_number);
	               balance -=transfer;
	               printf("You have successfuly transfered $%5.2f to a recipient account number %d", transfer, account_number);
	               printf("\nYour balance is $%5.2f", balance);
	               printf("\n\nThank you for banking with us");
	               break;
	            default:
	            printf("Enter a valid user input");
	            return 0;
	        }
	    }
	}
	    
return 0;	
}