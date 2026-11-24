#include <stdio.h>
#include <string.h>

#define MAX_SCORE 100

int main() {

    char studentName[100];
    char course[20];

    int score1, score2, score3, score4;
    int totalScore;
    int highestScore;

    double average, percentage;
    char grade;

    printf("========================================\n");
    printf("       STUDENT SCORE CALCULATOR\n");
    printf("========================================\n");

    printf("\nEnter student name: ");
    fgets(studentName, sizeof(studentName), stdin);
    studentName[strcspn(studentName, "\n")] = '\0';

    printf("Enter course (BBIT/BCS): ");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = '\0';

    printf("\nEnter score for Test 1: ");
    scanf("%d", &score1);

    printf("Enter score for Test 2: ");
    scanf("%d", &score2);

    printf("Enter score for Test 3: ");
    scanf("%d", &score3);

    printf("Enter score for Test 4: ");
    scanf("%d", &score4);

    if (score1 < 0 || score1 > MAX_SCORE ||
        score2 < 0 || score2 > MAX_SCORE ||
        score3 < 0 || score3 > MAX_SCORE ||
        score4 < 0 || score4 > MAX_SCORE) {

        printf("Error: Scores must be between 0 and 100.\n");
        return 1;
    }

    totalScore = score1 + score2 + score3 + score4;

    average = totalScore / 4.0;

    percentage = (totalScore / 400.0) * 100;

    highestScore = score1;

    if (score2 > highestScore)
        highestScore = score2;

    if (score3 > highestScore)
        highestScore = score3;

    if (score4 > highestScore)
        highestScore = score4;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n========================================\n");
    printf("              REPORT CARD\n");
    printf("========================================\n");

    printf("Student: %s\n", studentName);
    printf("Course: %s\n", course);

    printf("\nTest 1: %d/100\n", score1);
    printf("Test 2: %d/100\n", score2);
    printf("Test 3: %d/100\n", score3);
    printf("Test 4: %d/100\n", score4);

    printf("\nTotal: %d/400\n", totalScore);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Highest Score: %d\n", highestScore);
    printf("Grade: %c\n", grade);

    if (percentage >= 50)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    printf("========================================\n");

    return 0;
}