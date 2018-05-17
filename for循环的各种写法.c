#include <stdio.h>

int main(){
	int sum = 0;
	int i;
	for (i = 1; i <= 100; i++){
		sum += i;
	}
	printf("sum = %d\n", sum);
	
	sum = 0;
	i = 1;
	for (; i <= 100; i++){
		sum += i;
	}
	printf("sum = %d\n" ,sum);
	
	i = 1;
	sum = 0;
	for (; i <= 100; ){
		sum += i;
		i ++;
	}
	printf("sum = %d\n", sum);
	i = 1;
	sum = 0;
	for ( ; ; ){
		sum += i;
		i++;
		if(i > 100){
			break;
		}
	}
	printf("sum = %d\n", sum);
	return 0;
}
