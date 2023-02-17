#include <stdio.h>


int main()
{
	int a,b,c,i,s,day, year;
	char month[15];
	char start[80];
	char stop[80];
	char fname[80];
	char lname[80];
	
	
	printf("\n\t------Aditech Bus Transport LTD------\n");
	printf("Bookings should be done before 08:00 am if you want to travel same day.\n\n");
	printf("Enter 1 to see the our available Buses.\n");
    printf("Enter 2 to exit.\n");
    scanf("%d", &a);
    if (a==1)
    {
        while(1){
        printf("Dear customer here is our list of Buses.\n\n");
        printf("1. Bus 01 - not available.\n");
        printf("2. Bus 02 - not available.\n");
        printf("3. Bus 03 - available.\n");
        printf("4. Bus 04 - available.\n");
        printf("5. Bus 05 - not available. \n");
        scanf("%d", &b);
            if ((b==1) || (b==2) || (b==5))
            {
                printf("You selected Bus 0%d.\n", b);
                printf("Enter 1 to proceed.\n");
                printf("Enter 2 to cancel.\n");
                scanf("%d", &c);
                if (c==1)
                {
                    printf("\nDear customer, this Bus is not available for now.\nPlease select any available bus.\n\n");
                    
                }
                else
                {
                   ;
                }
                
            }
            else
            {
                printf("You selected Bus 0%d.\n", b);
                printf("This bus is availalable for booking.\n");
                break;
            }
        }
    }
    else if(a==2)
    {
        printf("Good bye.\n");
        return 0;
    }
    else
    {
        printf("Error wrong input.\n");
        return 0;
    }
    
    printf("\nPlease select from the list of available seats to make your reservation.\n");
    printf("\nSeat no: 5, 7, 10, 21, 23, 24, 27\n");
    scanf("%d", &s);
    if ((s==5) || (s==7) || (s==10) || (s==21) || (s==23) || (s==24) || (s==27))
    {
        printf("\nYou are booking seat %d.\n", s);
    }
    else
    {
        printf("\nSorry, Not availabe for booking.\n");
        return 0;
    }
    printf("\nNote* Use ' - ' to represent empty spaces between words.\n");
    printf("\nEnter your desired bus stop for pick up.\n");
    scanf("%s", &start);
    printf("\nEnter your desired destination.\n");
    scanf("%s", &stop);
    printf("\nEnter your desired date of travel. (ex.12 june 2010).\n");
    scanf("%d %s %d", &day, &month, &year);
    printf("\nYou have succesfully booked seat %d on Bus 0%d\n", s,b);
    printf("The bus will pick you up at %s by 09:34 am.\n\n", start);
    printf("\nFill in the following information to access your ticket.\n");
    printf("Enter your first name:\n");
    scanf("%s", &fname);
    printf("Enter your last name: \n");
    scanf("%s", &lname);

    printf("\n-----------------------------------------------");
    printf("\n\t------Aditech Bus Transport LTD------\n");
    printf("\n\t Booking Ticket\n\n");
    printf("First name: %s\n", fname);
    printf("Last name: %s\n", lname);
    printf("Bus: Bus 0%d\n", b);
    printf("Seat no.: %d\n", s);
    printf("From: %s\n",start);
    printf("To: %s\n", stop);
    printf("Time: 09:34 am.\n");
    printf("Date: %d - %s - %d\n", day, month, year);
    printf("Have a safe jurney.\n");
    printf("\n-----------------------------------------------");
}