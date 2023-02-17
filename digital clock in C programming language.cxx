#include <stdio.h>
#include <windows.h>
int main()
{
	int h,m,s;
	int d = 1000; // a delay of 1000milliseconds for the sleep function
	
	printf("set time: \n");
	scanf("%d%d%d", &h,&m,&s);
	if (h > 12 || m > 60 || s > 60)
	{
	    printf("error!");
	    return 0;
	}
	
	while(1) // this is an infinit loop and everything inside the loop will run continously.
	{
	    s++;
	    if (s >60)
	    {
	        m++;
	        s = 0;
	    }
	    if (m > 60)
	    {
	        h++;
	        m = 0;
	    }
	    if (h > 12)
	    {
	        h = 1;
	    }
	    printf("\n clock: ");
	    printf("\n %02d:%02d:%02d", h,m,s); //this writes our time in 00:00:00 format
	    sleep(d); // this slows down the while loop, making it more like a real clock
	    system("cls"); //this clears the screen
	}
}