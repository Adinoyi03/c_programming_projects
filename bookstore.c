#include <stdio.h>
struct record{
    char name[100];
    int number;
    float price;
    int quantity;
};
int main()
{
	int size, i;
	int sum= 0;

	printf("Welcome to Aditech book management system.\nUpdate the Book store with the latest Books purchased\n..................................................\n\nEnter the Books size\n");
	scanf("%d",&size);
	
	//initialize the books
	record books[size];
	printf("\nEnter the book information: \n\n");
	for (i = 0; i < size; i++)
	{
	    books[i].number = i+1;
	    printf("Enter book %d name\n",books[i].number);
	    scanf("%s",&books[i].name);
	    printf("Enter the quantity of Books\n");
	    scanf("%d", &books[i].quantity);
	    printf("Enter the Book price\n");
	    scanf("%f", &books[i].price);
	    sum+=books[i].quantity;
	}
	printf("\n\nDisplaying information: \n\n");
	
	for (i=0; i<size; i++)
	{
	    
	    printf("\nBook number %d\n", books[i].number);
	    printf("Book name: %s\n", books[i].name);
	    printf("Book price: $%5.2f\n", books[i].price);
	    printf("Book quantity: %d\n",books[i].quantity);
	    printf("Book price in total: $%5.2f",books[i].price * books[i].quantity);//for the total price of each books added to the store.
	    printf("\n_______________________________________\n\n");
	}
	printf("Book store updated successfully!\n");
	printf("You have added %d new book(s) to the Book store.", size);
	printf("\nTotal of %d number of Books has been add the Book store.\n",sum);
	return 0;
}