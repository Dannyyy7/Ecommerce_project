#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    switch (marks / 10) { // divide by 10 to get the tens place
        case 10: // for marks = 100
        case 9:  // 90-99
            if (marks >= 95) {
                grade = 'O';
            } else {
                grade = 'A';
            }
            break;
        case 8:  // 80-89
            grade = 'A';
            break;
        case 7:  // 70-79
            grade = 'B';
            break;
        case 6:  // 60-69
            grade = 'C';
            break;
        case 5:  // 50-59
            grade = 'D';
            break;
        case 4:  // 40-49
            grade = 'E';
            break;
        default: // marks < 40
            grade = 'F';
            break;
    }

    printf("Grade of the student: %c\n", grade);

    return 0;
}
