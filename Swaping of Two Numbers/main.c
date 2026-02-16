#include <stdio.h>

int main(void)
{
	int number1, number2, temp;

	printf("------------------------------\n");
	printf("Swaping of Two Numbers\n");
	printf("------------------------------\n");

	printf("Enter the first number  : ");
	scanf("%d", &number1);
	printf("Enter the second number : ");
	scanf("%d", &number2);

	printf("\nFirst Number  : %d\nSecond Number : %d\n", number1, number2);

	temp = number1;
	number1 = number2;
	number2 = temp;

	printf("First Number  : %d\nSecond Number : %d\n", number1, number2);
	printf("------------------------------\n");
	return 0;
}
