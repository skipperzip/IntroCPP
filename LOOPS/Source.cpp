#include <iostream>
//Written by Skipperzip

int main()
{
	int i = 1;
	int total = 0;
	for (int i = 0; i < 100; ++i)
	{

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz \n");
		else if (i % 3 == 0)
			printf("Fizz \n");
		else if (i % 5 == 0)
			printf("Buzz \n");
		else printf("%d \n", i);
	}
	getchar();
	i = 0;
	while (i < 1000)
	{
		if (i % 3 == 0)
		{
			printf("three \n");
			total = total + i;
		}
		else if (i % 5 == 0)
		{
			printf("five \n");
			total = total + i;
		}
		else
			printf("%d \n", i);
		++i;
	}
	printf("%d \n", total);

	system("pause");
}
