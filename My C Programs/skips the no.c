//
// Created by Tanish Sharma on 13-09-2025.
//
#include<stdio.h>
int main() {
    int n;
    int i = 0;
    int ne = 10;
    printf("Enter the number you want to skip (0–9): ");
    scanf("%d", &n);

    while (i < ne) {
        if (i == n) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}