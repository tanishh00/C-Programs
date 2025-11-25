#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Input matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Initialize with first row sum
    int maxSum = 0;
    for (int j = 0; j < cols; j++) {
        maxSum += arr[0][j];
    }
    int maxRow = 0;

    // Calculate row sums and track max
    for (int i = 1; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    printf("Row %d has the maximum sum = %d\n", maxRow + 1, maxSum);
    return 0;
}