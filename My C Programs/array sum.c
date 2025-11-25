#include <stdio.h>
int main() {
    int sum = 0;
    int n[10];
    float avg;
    int i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
        sum += n[i];
    }

    avg = sum / 10.0;  // use 10.0 for float division
    printf("The sum is: %d", sum);
    printf("\nAverage is: %.2f", avg);

    return 0;
}