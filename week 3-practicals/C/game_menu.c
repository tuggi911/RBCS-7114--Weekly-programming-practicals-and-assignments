#include <stdio.h>

int main() {
    int choice;

    printf("========== GAME MENU ==========\n");
    printf("1. Start Game\n");
    printf("2. Load Game\n");
    printf("3. Settings\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Starting game...\n");
            break;

        case 2:
            printf("Loading game...\n");
            break;

        case 3:
            printf("Opening settings...\n");
            break;

        case 4:
            printf("Exiting game...\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}