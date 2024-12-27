#include <iostream>

int main()
{
    short shortNumber{};
    int   intNumber{};
    long  longNumber{};
    long long longLongNumber{};
    float floatNumber{};
    double doubleNumber{};
    long double longDoubleNumber{};
    bool flag{};

    std::cout << "short: " << &shortNumber << ' ' << sizeof(shortNumber) << '\n';
    std::cout << "int: " << &intNumber << ' ' << sizeof(intNumber) << '\n';
    std::cout << "long: " << &longNumber << ' ' << sizeof(longNumber) << '\n';
    std::cout << "long long: " << &longLongNumber << ' ' << sizeof(longLongNumber) << '\n';
    std::cout << "float: " << &floatNumber << ' ' << sizeof(floatNumber) << '\n';
    std::cout << "double: " << &doubleNumber << ' ' << sizeof(doubleNumber) << '\n';
    std::cout << "long double: " << &longDoubleNumber << ' ' << sizeof(longDoubleNumber) << '\n';
    std::cout << "bool: " << &flag << ' ' << sizeof(flag) << '\n';

    return EXIT_SUCCESS;
}