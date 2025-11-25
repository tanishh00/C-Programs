#include <stdio.h>
int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int sumodd = 0, sumeven = 0;

    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0)
            sumeven += arr[i];
        else
            sumodd += arr[i];
    }

    printf("Sum of odd numbers = %d\n", sumodd);
    printf("Sum of even numbers = %d\n", sumeven);
    printf("Difference (even - odd) = %d\n", sumeven - sumodd);

    return 0;
}