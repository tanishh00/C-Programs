#include <stdio.h>
int main() {
    int n,count,rem,sum ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (n!=0) {

        rem = n % 10;
        if (n%2==0) {
            sum = sum + rem;
        }
        // add to sum
        n = n / 10;
        count++;

    }
    printf("(%d) <-- Total digits \n",count);
    printf("(%d) <--Sum of the given number",sum);
    return 0 ;
}