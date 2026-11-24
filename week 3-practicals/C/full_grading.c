#include <stdio.h>
#include <string.h>

int main() {
    char studentName[100];
    int score;

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);

    studentName[strcspn(studentName, "\n")] = '\0';

    printf("Enter student score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score. Enter a score between 0 and 100.\n");
        return 0;
    }

    printf("\n========== STUDENT REPORT ==========\n");
    printf("Student Name: %s\n", studentName);
    printf("Score: %d\n", score);

    if (score >= 70) {
        printf("Grade: A\n");
        printf("Remark: Excellent!\n");
    } else if (score >= 60) {
        printf("Grade: B\n");
        printf("Remark: Very Good!\n");
    } else if (score >= 50) {
        printf("Grade: C\n");
        printf("Remark: Good!\n");
    } else if (score >= 40) {
        printf("Grade: D\n");
        printf("Remark: Fair.\n");
    } else {
        printf("Grade: F\n");
        printf("Remark: Needs Improvement.\n");
    }

    printf("====================================\n");

    return 0;
}