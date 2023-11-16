#include <iostream>
#include <ctime>
void sort (int*,size_t);
int binar_search (int*,int,int,int);

int main ()
{
	srand(time(0));
	const size_t size = 10;
	int arr[size];

	for (int i = 0; i < size; ++i){
		
		arr[i] = rand() % 1000;
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;
	sort (arr,size);
	int num = 0;
	std::cin >> num;
	std::cout << binar_search (arr,0,size - 1,num) << std::endl;


}
int binar_search (int* arr, int start, int end, int target)
{
	int mid = 0;

	while (start <= end){
		mid = (start + end) / 2;
		if (arr[mid] == target){
			
			return mid;

		} else if (arr[mid] > target){
			
			end = mid - 1;
		} else if (arr[mid] < target){
			
			start = mid + 1;
		}

	}
	return -1;
}

void sort (int* arr, size_t size)
{
	for (int i = 0; i < size-1; ++i){
		int j = i;
		while (j >= 0 && arr[j] > arr[j+1]){
			
			std::swap (arr[j],arr[j+1]);
			--j;
		}
	
	}

	for (int i = 0; i < size; ++i){
		
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;
}

