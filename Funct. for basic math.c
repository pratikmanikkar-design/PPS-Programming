#include <stdio.h>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float div(int a, int b) { return (float)a / b; }
int main() 
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Add = %d\n", add(x, y));
    printf("Sub = %d\n", sub(x, y));
    printf("Mul = %d\n", mul(x, y));
    if (y != 0)
        printf("Div = %.2f\n", div(x, y));
    else
        printf("Error: Division by zero\n");
    return 0;
}


