#include <iostream>
#include <ctime>

int main ()
{
	srand(time(0));
	const size_t size = 10;
	int arr [size];
	for (int i = 0; i < size; ++i){
		
		arr[i] = rand() % 6;
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;
}
