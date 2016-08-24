#include <iostream>
//Written by Skipperzip

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int y = 0;
	int x = 0;
	int math = 0;
	char z = 0;
	//phase 1
	if (y == 0)
	{
		x = 100;
	}
	printf("X is: %d \n", x);
	system("pause");
	//phase 2
	printf("insert two numbers");
	std::cin >> y >> x;
	if (y > x)
	{
		x = y;
	}
	printf("the bigger number is %d \n", x);
	system("pause");
	//phase 3
// didn't have to do it lol
	//phase 4
	switch (a) {
	case 1:  printf("1\n");
		break; 
	case 2:
	case 3:  std::cout << "2 or 3\n";
		break;
	case 4:  std::cout << "4\n";
		break;
	default: std::cout << "invalid\n";
	}
	//phase 5
	y = (x == 0) ? 0 : 10 / x;
	//phase 6
	printf("insert a short two number math problem");
	std::cin >> a >> z >> c;
	switch(z)
	{
	case "+": std::cout << a + c;
	case "-": std::cout << a - c;
	case "/": std::cout << a / c;
	case "*": std::cout << a * c;
	default: std::cout << "nothing";
}