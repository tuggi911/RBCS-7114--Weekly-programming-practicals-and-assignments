#include <stdio.h>
#include <string.h>

struct Shape {
    char color[20];
};

struct Circle {
    struct Shape base;
    double radius;
};

int main() {
    struct Circle myCircle;

    // Set the inherited color
    strcpy(myCircle.base.color, "Red");

    // Set the circle's radius
    myCircle.radius = 5.0;

    // Display the circle information
    printf("--- Circle Information ---\n");
    printf("Circle Color (Inherited): %s\n", myCircle.base.color);
    printf("Circle Radius (Specific): %.2f\n", myCircle.radius);

    return 0;
}