#include <stdio.h>
int main()
{
	char c;
	char C;
	c = 'a';
	C = 'A';
	
	while (c <= 'z')
	{
	    putchar(c);
	    c++;
	    if (c <= 'z')
	    {
	        printf(", ");
	    }
	}
	printf("\n\n\n");
	while (C <= 'Z')
	{
	    putchar(C);
	    C++;
	        if (C <= 'Z')
	        {
	            printf(", ");
	        }
	}
	return 0;
}