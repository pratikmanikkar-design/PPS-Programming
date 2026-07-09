// Name:-Pratik S. Manikkar
// PRN No:-2503033111378UD031
#include <stdio.h>
int main() 
{
    int num, i;

    printf("Enter a number to print table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    for (i = 1; i <= 10; i++)
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

