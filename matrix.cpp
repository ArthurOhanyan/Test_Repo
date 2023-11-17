#include <iostream>
#include <ctime>
void init_mat (int [][5],size_t);
int main ()
{
	srand(time(0));
	const size_t size = 5;
	int arr [size][size];
	init_mat (arr,size);
	
}

void init_mat (int arr [][5], size_t size)
{
	for (int i = 0; i < size; ++i){
		
		for (int j = 0; j < size; ++j){
			
			arr [i][j] = rand() % 20;
			std::cout << " " << arr[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

}
