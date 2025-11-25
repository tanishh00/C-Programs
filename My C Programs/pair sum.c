#include <stdio.h>
int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n;
    printf("Enter target sum: ");
    scanf("%d", &n);

    int pairs = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = i+1; j < 8; j++) {
            if (arr[i] + arr[j] == n) {
                printf("Pair: (%d, %d)\n", arr[i], arr[j]);
                pairs++;
            }
        }
    }

    printf("Total pairs = %d\n", pairs);
    return 0;
}