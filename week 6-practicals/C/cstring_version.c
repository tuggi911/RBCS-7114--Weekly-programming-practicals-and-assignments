#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your name: ");

    fgets(name, 50, stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Name: %s\n", name);

    printf("Length: %lu\n", (unsigned long)strlen(name));

    if (name[0] != '\0') {
        printf("First character: %c\n", name[0]);
    } else {
        printf("The name is empty.\n");
    }

    char copy[50];

    strcpy(copy, name);

    printf("Copy: %s\n", copy);

    return 0;
}