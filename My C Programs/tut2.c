#include <stdio.h>

int main() {
    float radius, volume;

    // Prompt user for radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate volume
    volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;

    // Display result
    printf("Volume of the sphere = %.2f cubic units\n", volume);

    return 0;
}