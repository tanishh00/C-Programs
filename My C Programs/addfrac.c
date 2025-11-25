#include<stdio.h>
int main() {
    int a,b,c,d;
    int z,y,rom;


    printf("enter the fraction you want to add in from of x/y+a/b:");
    scanf("%d/%d+%d/%d",&a,&b,&c,&d);
    z=a*c+b*d;
    y=b*d;
    printf("sum is %d/%d \n ",z,y);
    rom=z/y;
    printf("final ans:%d",rom);
    return 0;
}
/*#include <stdio.h>

int main() {
    int num1, denom1, num2, denom2;
    int result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
*/