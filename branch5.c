#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 20;
    float height = 5.9;
    double distance = 12345.6789;
    char initial = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Distance: %.4lf\n", distance);
    printf("Initial: %c\n", initial);

    return 0;
}

