#include <stdio.h>
#include <math.h>

int main(void)
{
	float temperature, wind_velocity, wind_chill_temp;

	printf("-------------------------------------\n");
	printf("Wind Chill Temperature\n");
	printf("-------------------------------------\n");
	printf("Enter the temperature(°F): ");
	scanf("%f", &temperature);

	printf("Enter the wind velocity(mph): ");
	scanf("%f",&wind_velocity);


	wind_chill_temp = 35.74 + (0.6215 * temperature) - 35.75 * pow(wind_velocity, 0.16) + 0.4275 * temperature * pow(wind_velocity, 0.16);
	printf("The Wind Chill Temperature : %.2f°F\n", wind_chill_temp);
	printf("-------------------------------------\n");
	return 0;
}
