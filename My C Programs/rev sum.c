#include <stdio.h>
int main() {
    int n ;
    printf("enter the no you want to rev");
    scanf("%d",&n);
    int r;
    int sum,rem;
    while (n>0) {
        rem=n%10;
        r=(r*10)+rem;
        sum=sum+rem;
        n=n/10;
    }
    printf("the rev no is %d\n",r);
    printf("the sum no is %d",sum);

    return 0 ;

}