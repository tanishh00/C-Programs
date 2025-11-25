//
// Created by Tanish Sharma on 25-11-2025.
//

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num%2==0) {
        printf("The No is EVEN");
        if (num>=0) {
            printf("\n The No is +ve");
        }
        else {
            printf("\n The No is -ve");
        }

    }
    else {
        printf("The No is ODD");
        if (num>=0) {
            printf("\n The No is +ve");
        }
        else {
            printf("\n The No is -ve");}
    }
    return 0;

}