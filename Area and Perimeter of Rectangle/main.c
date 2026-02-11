#include <stdio.h>

int main(void)
{
    float width, height, perimeter, area;

    printf("---------------------------------------\n");
    printf("Area and Perimeter of Rectangle\n");
    printf("---------------------------------------\n");
    printf("Enter the height of rectangle(cm): ");
    scanf("%f", &height);

    printf("Enter the width of rectangle(cm): ");
    scanf("%f", &width);

    area = height * width;
    perimeter = 2*(height + width);

    printf("Area of Ractangle : %.2f cm\n", area);
    printf("Perimeter of Ractangle : %.2f cm\u00B2 \n", perimeter);
    printf("--------------------------------------\n");

    return 0;
}

