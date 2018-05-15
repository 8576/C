#include <stdio.h>

#define PI1  3.1415926

int main(){
	printf("%.10lf\n", PI1);
	const double PI2 = 3.1415925;
	printf("%.lf\n", PI2);
/*	const double PI1 = 89;
	printf("afer change PI1 is %10lf\n", PI1); */
	return 0;
}
