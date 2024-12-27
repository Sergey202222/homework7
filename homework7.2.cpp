#include <iostream>

void swap(int& number1, int& number2)
{
	int buffer{number1};
	number1 = number2;
	number2 = buffer;
}

int main(int argc, char** argv)
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return EXIT_SUCCESS;
}