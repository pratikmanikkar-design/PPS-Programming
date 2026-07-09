// Name:-Pratik S. Manikkar
// PRN No:-2503033111378UD031
#include <stdio.h>
int main() 
 {
    int rows,i,j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    
    for(i = rows; i >=1 ; i--) 
	{
       for (j = 1; j <= i; j++) 
	     {
       	 printf("* ");
	   }
	   printf("\n");
    }

    return 0;
 }
