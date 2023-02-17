#include <stdio.h>
int main()
{
	int a1, a2, result;
	char opr;
	printf("Welcome!!! \nThis is a simple arithmetic calculator that accepts two operands and a valid arithmetic operator +, -, *, modulus  and /.\n\nEnter first number \n");
	scanf("%d", &a1);
	printf("Enter operator\n");
	scanf(" %c", &opr);
	printf("Enter second number\n");
	scanf("%d", &a2);
	
	switch(opr)
	{
	    case '+':
	       result = a1 + a2;
	       printf("Adding %d to %d will result to", a1, a2);
	       break;
	    case '-':
	       result = a1 - a2;
	       printf("Subtracting %d from %d will result to", a2, a1);
	       break;
	    case '*':
	       result = a1*a2;
	       printf("Multiplying %d by %d will result to", a1, a2);
	       break;
	    case '/' :
	       result = a1/a2;
	       printf("Dividing %d by %d will approximate to", a1, a2);
	       break;
	    case '%':
	       result = a1 % a2;
	       printf("%d modulus %d will result to", a1, a2);
	       break;
	}
	printf(" %d", result);
	return 0;
}