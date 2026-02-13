#include <stdio.h>

int main(void)
{
    int number, last_digit, sum_of_digits = 0, temp;

    printf("---------------------------\n");
    printf("Sum Of Digits\n");
    printf("---------------------------\n");
    printf("Ente the number: ");
    scanf("%d", &number);

    temp = number;

    while(temp != 0)
    {
        last_digit = temp % 10;
        sum_of_digits += last_digit;
        temp /= 10;
    }

    printf("Sum of digits : %d\n" , sum_of_digits);
    printf("---------------------------\n");
    return 0;
}
