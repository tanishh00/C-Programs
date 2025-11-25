#include<stdio.h>
int main() {
    int n = 19;

    if((n % 5 == 0 || n % 3 == 0) && n % 15 != 0) {
        printf("%d is divisible by 5 and 3 but not by 15", n);
    }
    else {
        printf("%d does not satisfy the condition", n);
    }

    return 0;
}