#include <stdio.h>
int main() {
    int a[2][2];
    printf("Enter elements for 2x2 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The array is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int min = a[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    printf("%d <-- Is the min element in the array\n", min);
    return 0;
}