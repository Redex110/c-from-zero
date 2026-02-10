#include <stdio.h>

int main(void)
{
    float fahrenheit, celsius;

    printf("---------------------------------------------------\n");
    printf("Temperature Unit Converter\n");
    printf("---------------------------------------------------\n");
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    // Calculation to convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("\n");
    printf("The temperature in Celsius : %.2f\n", celsius);
    printf("---------------------------------------------------\n");

    return 0;
}

