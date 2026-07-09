#include <stdio.h>
int main() {
    int marks;
    char grade;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 75) {
        grade = 'A';
    } else if (marks >= 65) {
        grade = 'B';
    } else if (marks >= 40) {
        grade = 'C';
    } else if (marks >= 33) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    switch (grade) {
        case 'A':
            printf("Grade A: Excellent\n");
            break;
        case 'B':
            printf("Grade B: Well done\n");
            break;
        case 'C':
            printf("Grade C: Good\n");
            break;
        case 'D':
            printf("Grade D: You passed\n");
            break;
        case 'F':
            printf("Grade F: Better luck next time\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}

