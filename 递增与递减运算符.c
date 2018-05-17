#include <stdio.h>
int main(){
	int number = 6;
	printf("number = %d\n", number);
	number++;
	printf("number = %d\n", number);
	++number;
	printf("number = %d\n", number);
	number--;
	printf("number = %d\n", number);
	--number;
	printf("number = %d\n", number);
	
	int n1 = 10;
	int temp1 = 5 + n1++;
	int n2 = 10;
	int temp2 = n2 + ++n2; //注意这儿，这个地方比较特殊。
	printf("temp1 = %d, temp2 = %d, n2 = %d\n", temp1, temp2, n2);
	return 0;
}	
