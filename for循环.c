#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Please input n:\n");
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		sum += i;
	}
	printf("1 + 2 + ... + %d = %d\n", n, sum);
	return 0;
}
