#include <stdio.h>
int main() 
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) 
	{
        printf("Error: Negative number entered\n");
    } else if (n == 0) 
	{
        printf("Factorial of 0 = 1\n");
    } else {
        for (i = 1; i <= n; i++) 
		{
            fact = fact * i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}

