#include <stdio.h>
#define PI 3.14

int main(void)
{
	float radius, circumference, area;
	printf("---------------------------------------\n");
	printf("Area and Circumference of Circle\n");
	printf("---------------------------------------\n");
	printf("Enter the radius of circle(cm): ");
	scanf("%f", &radius);

	circumference = 2 * PI * radius;
	area = PI * radius * radius;



	printf("Area of Circle : %.2f cm\u00B2\n", area);
	printf("Perimeter of Circle : %.2f cm\n", circumference);
	printf("--------------------------------------\n");

	return 0;
}

