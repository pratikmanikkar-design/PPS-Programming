// Name:-Pratik S. Manikkar
// PRN No:-2503033111378UD031
#include <stdio.h>

int main() 
{
    int pin, correctPin = 2006; 

    printf("Enter your ATM PIN: ");
    scanf("%d", &pin);

    if (pin == correctPin) 
	{
        printf("Access Granted. Welcome!\n");
    } else
	 {
        printf("Invalid PIN. Access Denied.\n");
     }

    return 0;
}

