// Name:-Pratik S. Manikkar
// PRN No:-2503033111378UD031
#include <stdio.h>
int main() 
{
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Even elements: ");
    for (i = 0; i < n; i++) 
	{
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd elements: ");
    for (i = 0; i < n; i++) 
	{
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    return 0;
}

