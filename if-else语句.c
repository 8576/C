#include <stdio.h>

int main(){
	char letter;
	char test;
	printf("Please enter a lowercase or an uppercase:\n");
	scanf("%c", &letter);
	test = letter;
	if(!(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')){	
		printf("Your enter wrong letter.\n");
		return 0;
	}
	else{
		if(letter >= 'A' && letter <= 'Z'){
			letter = letter - 'A' + 'a';
			test -= 'A' + 'a'; // 逻辑不对
		}
		else{
			letter = letter - 'a' + 'A';
		}
	}
	printf("The changed letter is %c test = %d.\n", letter, test);
	return 0;
}
