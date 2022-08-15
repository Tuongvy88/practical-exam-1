#include <iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {

	int binary[7] = {1,0,0,1,0,0,1};

	std::cout<< bin_to_int(binary, 7) << std::endl;

	return 0;

}