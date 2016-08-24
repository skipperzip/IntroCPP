#include <iostream>
//Written by Skipperzip

int main()
{
	//variable setting
	char a = 0;
	char b = 0;
	char c = 0;
	printf("please insert 2 letters separated by a space ");
	std::cin >> a >> b;
	//caps fixing
	if (a < 91)
	{
		a = a + 32;
	}
	if (b < 91)
	{
		b = b + 32;
	}
	//swap places?
	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	//loops until the answer is achieved
	while (a < b)
	{
		a++;
		b--;
	}
	//say the answer and pause
	printf("the answer is: %c \n", a);
	system("pause");

	
}