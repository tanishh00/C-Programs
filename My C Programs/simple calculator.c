//
// Created by Tanish Sharma on 12-09-2025.
//
#include<stdio.h>
int main()
{
    int a,b,x,y,z,sum,sub,mul,div;
    float d;
    printf("Enter the First Number:");
    scanf("%d",&a);

    printf("Enter the First Number:");
    scanf("%d",&b);

    x=a+b;
    printf("the Sum of two numbers are:%d\n",x);

    y=a-b;
    printf("the Substraction of Two Numbers are:%d\n",y);

    z=a*b;
    printf("the Multiplication of two numbers are:%d\n",z);

    d=a/b;
    printf("the Division of two numbers are:%.2f\n",d);

    return 0;
}