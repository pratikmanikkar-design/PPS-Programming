#include <stdio.h>

int main() {
    int length, width;
    int area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\nArea of rectangle = %d", area);
    printf("\nPerimeter of rectangle = %d", perimeter);

    return 0;
}

