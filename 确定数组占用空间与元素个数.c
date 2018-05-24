#include <stdio.h>

int main(){	
	double value[5];
	
	printf("double array value takes %lu bytes.\n", sizeof(value));
	
	int number[] = {1, 2, 3, 4, 5, 6, 7, 8};
	printf("int array number takes %lu bytes.\n", sizeof(number));
	
	int element_count = sizeof(number) / sizeof(int);
	printf("int array number has %d elements.\n", element_count);
	
	return 0;
}

