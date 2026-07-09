// Name:-Pratik S. Manikkar
// PRN No:-2503033111378UD031
#include <stdio.h>
int main() 
{
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   
    }
    printf("Total sum = %d\n", sum);

    return 0;
}

