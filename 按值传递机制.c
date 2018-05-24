#include <stdio.h>

void modify_variable(int num){
	num = 999;
}

void modify_array(int array[], int n){
	int i;
	for (i = 0; i < n; i++){
		array[i] = 999;
	}

}

int main(){
	int a = 0;
	int b[10] = {0};
	int i;
	printf("a = %d\n", a);
	printf("b = ");
	for (i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("after modify:\n");
	modify_variable(a);
	modify_array(b, 5);
	printf("a = %d\n", a);
        printf("b = ");
        for (i = 0; i < 10; i++){
                printf("%d ", b[i]);
        }
	printf("\n");
	return 0;	




}
