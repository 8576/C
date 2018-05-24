#include <stdio.h>

int main(){
	int i;	
	
	double value1[5] = {1.1, 2.35, 6.0, 7.8, 9.2};	
	for (i = 0; i < 5; i++){
		printf("%.2lf ", value1[i]);
	}
	printf("\n");
	
	double value2[5] = {1.1, 2.35, 6.0};	
	for (i = 0; i < 5; i++){
		printf("%.2lf ", value2[i]);
	}
	printf("\n");
	
	double value3[5] = {0};	
	for (i = 0; i < 5; i++){
		printf("%.2lf ", value3[i]);
	}
	printf("\n");
	
	double value4[] = {1.1, 2.35, 6.0, 7.8, 9.2};	
	for (i = 0; i < 5; i++){
		printf("%.2lf ", value4[i]);
	}
	printf("\n");
	
	double value5[5];
	for (i = 0; i < 5; i++){
		printf("%.2lf ", value5[i]);
	}
	printf("\n");
	
	return 0;
}

