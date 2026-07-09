// Name:-Pratik S. Manikkar
// PRN No:-2503033111378UD031
#include <stdio.h>
int main() 
 {
    int rows,cols,i,j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    for(i = 1; i <=rows ; i++) 
	{
       for (j = 1; j <= cols ; j++) 
	     {
       	 printf("* ");
	   }
	   printf("\n");
    }

    return 0;
 }
