#include <iostream>


int main()
//Written by Skipperzip

{
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("A currently stores: %d \n", a);
	printf("B currently stores: %d \n", b);

	printf("Insert a new value for A: ");
	scanf_s("%d", &a);

	printf("Insert a new value for b: ");
	scanf_s("%d", &b);
	
	printf("A and B are now swapped \n");

	//swap
	c = a;
	a = b;
	b = c;

	printf("A currently stores: %d \n", a);
	printf("B currently stores: %d \n", b); 
	
	getchar();
	getchar();
}