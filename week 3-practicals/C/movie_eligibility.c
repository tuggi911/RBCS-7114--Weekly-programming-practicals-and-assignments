#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can watch the movie.\n");
    } else if (age >= 13) {
        printf("You can watch the movie with parental guidance.\n");
    } else {
        printf("You are too young to watch this movie.\n");
    }

    return 0;
}