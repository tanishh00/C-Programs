#include <stdio.h>
int main() {
    int a;
    printf("enter the year-->");
    scanf("%d", &a);
    if (a%4==0 && a%100!=0||a%400==0) {
        printf("yuhh its a leap year");

    }
    else {
        printf("yuhh its a not a leap year");
    }
    return 0;
}
