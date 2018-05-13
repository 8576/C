#include <stdio.h>

int main(){
	int a = 12345;
	double A_DOUBLE_VARIABLE;
	char char123 = 'C';
	A_DOUBLE_VARIABLE = 123.5654;
	int *a_address = &a;
	printf("：%c\n", char123);
	printf("a = %d, a_address = %p\n", a, a_address);
	printf("A_DOUBLE_VARIABLE = %lf\n", A_DOUBLE_VARIABLE);
	return 0;
}
