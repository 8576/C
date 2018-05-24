#include <stdio.h>

#define MAX_ARRAY_LEN 1000

void sort_array(int array[], int n){
	int i;
	int j;
	int temp;
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if (array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

}

int main(){
	int array[MAX_ARRAY_LEN] = {0};
	int n;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	sort_array(array, n);
	for (i = 0; i < n; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
