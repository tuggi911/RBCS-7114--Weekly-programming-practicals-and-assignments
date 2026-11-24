#include <stdio.h>

int main() {
    int age, hasTicket, isMember;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a ticket? (1 = Yes, 0 = No): ");
    scanf("%d", &hasTicket);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    if ((age >= 18 && hasTicket) || isMember) {
        printf("You are allowed to enter the event.\n");
    } else {
        printf("Sorry, you are not allowed to enter.\n");
    }

    return 0;
}