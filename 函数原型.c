#include <stdio.h>

double my_pow(double x, int y);	

int main(){
	printf("3 ^ 5 = %lf\n", my_pow(3, 5));
	return 0;
}

double my_pow(double x, int y){
	double result = 1;
	int i;
	for (i = 0; i < y; i++){
		result *= x;
	}
	return result;
}
//printf("")
