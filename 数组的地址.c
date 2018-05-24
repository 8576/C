#include <stdio.h>

int main(){
	int number[12] = {0};
	int i;
	for (i = 0; i < 12; i++){
		number[i] = i * 10;
	}
	
	printf("array_address = %p, %p\n", number, &number[0]);	
	for (i = 0; i < 12; i++){
		int address = (int)number + sizeof(int) * i;		
		printf("element %d address %p == %p values %d.\n"
			, i, &number[i], address, number[i]);
	}
	return 0;
}

