//
// Created by Tanish Sharma on 16-09-2025.
// int is of two type 1. Signed 2. Unsigned 1. Signed-it means capable for store both +- values 2. Unsigned-only to store the +ve value
int main() {
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    if (n<0) {
        printf("the no is -ve");
    }
    else if (n==0) {
        printf("it is zero");
    }
    else {
        printf("the no is positive");
    }
    return 0;
}

