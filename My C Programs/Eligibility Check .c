//
// Created by Tanish Sharma on 25-11-2025.
//
#include <stdio.h>
int main(){
    char n;
    int age;
    printf("Enter the nationality(I)or (i) for Indian -->");
    scanf("%c",&n);
    if (n=='I' || n=='i') {
        printf("Enter your age? -->");
        scanf("%d",&age);
        if (age>=18) {
            printf("Yes you are eligible");
        }
        else {
            printf("Sorry you are not eligible");
        }
    }
    else {
        printf("Sorry you are not indian");

    }

    return 0;
}
