 #include<stdio.h>
 int main() {
     int n,t,o,rev;
     printf("enter the no.");
     scanf("%d",&n);
     t=n/10;
     o=n%10;
     rev=o*10+t;
     printf("the of %d no is %d \n",n,rev);
     return 0;
 }

 #include <stdio.h>
 int main() {
     int n, h, t, o, rev;
     printf("Enter a 3-digit number: ");
     scanf("%d", &n);

     h = n / 100;        // hundreds place
     t = (n / 10) % 10;  // tens place
     o = n % 10;         // ones place

     rev = o * 100 + t * 10 + h;  // reverse the digits

     printf("The reverse of %d is %d\n", n, rev);

     return 0;
 }


 #include <stdio.h>

 int main() {
     int num, rev = 0, rem;

     printf("Enter a number: ");
     scanf("%d", &num);

     while (num != 0) {
         rem = num % 10;
         rev = rev * 10 + rem;
         num = num / 10;
     }

     printf("Reversed number: %d\n", rev);

     return 0;
 }


 #include <stdio.h>
 int main() {
     int n;
     int i;
     int count = 0;
     printf("Enter the no");
     scanf("%d", &n);
     while (n!=0){
         n=n/10;
         count++;

     }
     printf("%d ", count);
     return 0;
 }
