#include<stdio.h>
int main() {
     float cm,gm,sum;
    printf("enter the marks of two subjects \n ");
    scanf("%f%f",&cm,&gm);
    sum=(30.0/100)*cm+(70.0/100)*gm;
    printf("the sum of two subjects are: %0.2f",sum);

    return 0;

}