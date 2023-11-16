#include <iostream>
#include <ctime>
int find_max (int*,size_t);

int main ()
{
	srand(time(0));
	const size_t size = 10;
	int arr [size];
	for (int i = 0; i < size; ++i){
		
		arr[i] = rand() % 600;
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;
	std::cout << "Max element is " << find_max (arr,size) << std::endl;
}

int find_max (int* arr, size_t size)
{
	int max = arr[0];
	for (int i = 1; i < size; ++i){
		
		if (arr[i] > max){
			
			max = arr[i];
		}
	}

	return max;
}
