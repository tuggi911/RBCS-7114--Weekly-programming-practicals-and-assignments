#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;

    printf("Path Analysis\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    if (x > y) {
        printf("Path A: x is greater than y.\n");
    } else if (x < y) {
        printf("Path B: x is less than y.\n");
    } else {
        printf("Path C: x is equal to y.\n");
    }

    return 0;
}