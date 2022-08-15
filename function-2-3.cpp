#include <iostream>



bool is_array_palindrome(int integers[], int length) {
	int decider = 0;
	

	if (length <= 0) {
		return 0;
	}



	for (int i = 0; i < length; i++) {
		if (integers[i]==integers[length-i-1]) {
			decider++;
		} else {
			return 0;
		}

	}
	return decider;

}



int sum_integers(int integers[], int length) {

	int sum = 0;

	if (length <= 0) {
		return -1;
	}

	for (int j = 0; j<length; j++) {
		sum += integers[j];
	}

	return sum;

}



int palindrome_sum(int integers[], int length) {
	
	if (length <= 0) {
		return -1;
	}

	if (is_array_palindrome(integers, length) == 1) {
		return sum_integers(integers, length);
	} else {
		return -2;
	}


}