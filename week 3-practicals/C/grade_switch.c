#include <stdio.h>

int main() {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score.\n");
        return 0;
    }

    switch (score / 10) {
        case 10:
        case 9:
        case 8:
            printf("Grade: A\n");
            break;

        case 7:
            printf("Grade: B\n");
            break;

        case 6:
            printf("Grade: C\n");
            break;

        case 5:
            printf("Grade: D\n");
            break;

        default:
            printf("Grade: F\n");
    }

    return 0;
}