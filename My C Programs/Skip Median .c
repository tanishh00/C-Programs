#include<stdio.h>
int main() {
    int i = 0;
    int j;
    printf("enter the end point: ");
    scanf("%d", &j);

    int c = (i + j) / 2;   // median

    while (i <= j) {
        if (i == c) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}


