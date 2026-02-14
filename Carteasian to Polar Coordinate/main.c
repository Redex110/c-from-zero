#include <stdio.h>
#include <math.h>

float square(float num);

int main(void)
{
	float carteasian_x, carteasian_y, polar_x, polar_theta;

	printf("-------------------------------------------------\n");
	printf("Cateasian to Polar Coordinate\n");
	printf("-------------------------------------------------\n");

	printf("Enter the carteasian coordinate (x, y): ");
	scanf("%f, %f", &carteasian_x, &carteasian_y);

	polar_x = sqrt(square(carteasian_x) + square(carteasian_y));
	polar_theta = atan2(carteasian_y, carteasian_x);

    printf("\n");
    
    printf("Carteasian Coordinate: (%.3f, %.3f)\n", carteasian_x, carteasian_y);
	printf("Polar Cooordinate: (%.3f, %.3f)\n", polar_x, polar_theta);

	printf("-------------------------------------------------\n");
	return 0;
}

float square(float num) {
	return num * num;
}
