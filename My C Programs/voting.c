#include <stdio.h>
//
// Created by Tanish Sharma on 16-09-2025.
//
int main() {

   char chi ='indian';


    printf("enter your nationality");
    scanf("%c",&chi);
    int n;

    printf("enter your age\n");
    scanf("%d",&n);

    if (chi==chi) {
        if (n>18)
            printf("you are not eligible");
        else
            printf("not eligible");
    }

    return 0;
}