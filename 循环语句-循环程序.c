#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Please input n:\n");
	scanf("%d", &n);
	int i = 1;
	while (i <= n){
		sum += i;
		i++;
		
	}
	printf("1 + 2 + ... + %d = %d\n", n, sum);
	return 0;
}
