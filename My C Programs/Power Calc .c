#include <stdio.h>
int main() {
    int a, b;
    printf("Enter base and power (space separated): ");
    scanf("%d %d", &a, &b);

    int power = 1;
    for (int i = 1; i <= b; i++) {
        power = power * a;
    }

    printf("%d power %d is %d\n", a, b, power);
    return 0;
}