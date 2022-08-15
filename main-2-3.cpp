#include <iostream>

extern int palindrome_sum(int integers[], int length);

int main () {

	int array[5] = {1,2,3,2,1};

	std::cout << palindrome_sum(array, 5) << std::endl;

	return 0;


}