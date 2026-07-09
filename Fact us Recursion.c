// Name:-Pratik S. Manikkar
// PRN No:-2503033111378UD031
#include <stdio.h>
int fact(int n)
{
    if (n == 0) return 1;
    return n * fact(n - 1);
}
int main() 
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error: Negative number\n");
    else
        printf("Factorial of %d = %d\n", n, fact(n));
    return 0;
}

