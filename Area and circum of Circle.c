#include <stdio.h>
#define PI 3.14159

int main() {
    int radius, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of circle = %.2d\n", area);
    printf("Circumference of circle = %.2d\n", circumference);

    return 0;
}

