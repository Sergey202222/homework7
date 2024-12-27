#include <iostream>

void swap(int& number1, int& number2)// этот способ некоректно работает с вещественным типом данных
{
	number1 = number1 + number2;
	number2 = number1 - number2;
	number1 -= number2;
}

int main(int argc, char** argv)
{
	int a = 8, b = 9;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return EXIT_SUCCESS;
}