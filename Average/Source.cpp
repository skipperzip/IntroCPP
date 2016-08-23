#include <iostream>


int main()
{
	printf("please insert 5 numbers separated by spaces ");
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	std::cin >> a >> b >> c >> d >> e;
	std::cout << "average: " << (a + b + c + d + e) / 5;
	system("pause");
}