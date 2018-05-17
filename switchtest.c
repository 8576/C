#include <stdio.h>

int main(){
	int number;
	printf("input a number:\n");
	scanf("%d", &number);
	switch(number){
		case 1: printf("hello the world!\n");
		case 2: printf("this is case 2");
		case 3: printf("this is case 3");
	}
	return 0;
}
