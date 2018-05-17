#include <stdio.h>
#include <math.h>

int main(){
	const double PI = 3.1415926;
	double area;
	double radius;
	double diameter;
	printf("Please input the area of circle:\n");
	scanf("%lf", &area);
	radius = sqrt(area / PI);
	diameter = 2 * PI * radius;
	printf("The diameter of circle is %.2lf.\n", diameter);
}
