#include <stdio.h>

int main(){
	char a;
	short b;
	int c, c1, c2, c3;
	long d;
	long long e;
	float f;
	double g;
	scanf("%c", &a);
	scanf("%hd", &b);
	scanf("%d", &c);
	scanf("%ld", &d);
	scanf("%lld", &e);
	scanf("%f", &f);
	scanf("%lf", &g);
	printf("char takes %lu bytes, a = %c.\n", sizeof(a), a);
	printf("short takes %lu bytes, b = %hd.\n", sizeof(b), b);
	printf("int takes %lu bytes, c = %d.\n", sizeof(c), c);
	printf("long takes %lu bytes, d = %ld.\n", sizeof(d), d);
	printf("long long takes %lu bytes, e = %lld.\n", sizeof(e), e);
	printf("float takes %lu bytes, f = %f.\n", sizeof(f), f);
	printf("double takes %lu bytes, g = %lf.\n", sizeof(g), g);
	return 0;
}
