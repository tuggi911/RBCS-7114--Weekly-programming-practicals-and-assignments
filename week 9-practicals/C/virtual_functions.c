#include <stdio.h>
#include <string.h>

typedef void (*SpeakFunction)();

struct Animal {
    SpeakFunction speak;
};

struct Dog {
    struct Animal base;
};

void genericSound() {
    printf("Animal makes a generic sound.\n");
}

void dogBark() {
    printf("Dog barks: Woof! Woof!\n");
}

int main() {
    printf("--- Simulating Non-Virtual (Base only) ---\n");

    struct Animal myAnimal;

    myAnimal.speak = genericSound;

    myAnimal.speak();

    printf("\n--- Simulating Virtual (Dynamic binding) ---\n");

    struct Dog myDog;

    myDog.base.speak = dogBark;

    struct Animal* pet = (struct Animal*)&myDog;

    pet->speak();

    return 0;
}