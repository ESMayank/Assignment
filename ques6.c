#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float total, average, percentage;

    printf("Enter the marks of the five subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A+");
    }
    else if (percentage >= 80) {
        printf("Grade: A");
    }
    else if (percentage >= 70) {
        printf("Grade: B+");
    }
    else if (percentage >= 60) {
        printf("Grade: B");
    }
    else if (percentage >= 50) {
        printf("Grade: C+");
    }
    else if (percentage >= 40) {
        printf("Grade: C");
    }
    else {
        printf("Grade: F");
    }
    
    return 0;
}
