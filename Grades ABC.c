// Name:-Pratik S. Manikkar
// PRN No:-2503033111378UD031
#include <stdio.h>
int main() 
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 75) 
	{
        printf("Grade: A\n");
    } else if (marks >= 65)
	 {
        printf("Grade: B\n");
    } else if (marks >= 40) 
	{
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}


