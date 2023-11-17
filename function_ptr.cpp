#include <iostream>
#include <ctime>
int foo (int);
int main ()
{
	int num = 0;
	std::cin >> num;
	std::cout << " The pow of the num is " << foo (num) << std::endl;
}

int foo (int num)
{
	return num * num
}
