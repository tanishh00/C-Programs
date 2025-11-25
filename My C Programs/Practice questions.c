// #include <stdio.h>
// int main() {
//     int n=4;
//     for (int i = 1 ; i <= n ;i++) {
//         for (int j = 1 ; j<=i ; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int n=4;
     // for (int i = 1 ; i <= n ;i++) {
     //     for (int j = 1 ; j<=n+1-i ; j++) {
     //         printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n=3;
//     int num=1;
//
//     for (int i = 1 ; i <= n ;i++) {
//         for (int k = 1 ; k<=n-i; k++) {
//             printf(" ");
//         }
//         for (int j = 1 ; j<=2*i-1 ; j++) {
//             printf("%d",num);
//             num++;
//
//         }
//
//
//         printf("\n");
//     }
//     return 0;
// }

//
// #include<stdio.h>
// int main() {
//     int a , b;
//     printf("Enter the a : ");
//     scanf("%d",&a);
//     printf("Enter the b : ");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("the n=%d", a);
//     printf("b=%d", b);
//     return 0 ;
//
// }



// **pass by value**
//
// #include <stdio.h>
// void swap(int* x,int* y) {
//     int temp ;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//
// }
// int main() {
//     int a =20;
//     int b =30;
//     swap(&a,&b);
//     printf("The value of a is --->%d\nAnd the value of b ---> %d",a,b);
//     return 0;
// }
//  #include <stdio.h>
// int main() {
//     int a=20 , b=30 ;
//     int *vsa=&b ;
//     int *vsb=&a ;
//     printf("the value of a , b are %d %d",*vsa,*vsb);
//      return 0;
//
// }
// #include <stdio.h>
//
// // Function to find minimum of two numbers
// int min(int a, int b) {
//     if (a < b) return a;
//     else return b;
// }
//
// // Function to find gcd using min
// int gcd(int a, int b) {
//     int hcf = 1;  // declare hcf
//     for (int i = min(a, b); i >= 1; i--) {
//         if (a % i == 0 && b % i == 0) {
//             hcf = i;
//             break;
//         }
//     }
//     return hcf;
// }
//
// int main() {
//     int a, b;
//     printf("Enter Number one: ");
//     scanf("%d", &a);
//     printf("Enter Number two: ");
//     scanf("%d", &b);
//
//     int hcf = gcd(a, b);
//     printf("The HCF of two numbers is %d\n", hcf);
//
//     return 0;
// }


// #include <stdio.h>
//
// int main() {
//     int a, b, hcf;
//
//     // Input two numbers
//     printf("Enter Number one: ");
//     scanf("%d", &a);
//     printf("Enter Number two: ");
//     scanf("%d", &b);
//
//     // Start from the smaller of the two numbers
//     for (int i = (a < b ? a : b); i >= 1; i--) {
//         if (a % i == 0 && b % i == 0) {
//             hcf = i;
//             break;   // stop once we find the highest common factor
//         }
//     }
//
//     // Output result
//     printf("The HCF of two numbers is %d\n", hcf);
//
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//
//     int t1=0 , t2 = 1;
//     int new=t1+t2;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     printf("Fibonacci Series: %d, %d, ", t1, t2);
//     for ( int i =3 ; i<=n ; i++) {
//         printf("%d, ", new);
//         t1=t2;
//         t2=new;
//         new=t1+t2;
//     }
//     return 0;
//     }
#include <stdio.h>

//
// int main() {
//     int n , rev , rem , orig;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     orig = n;
//     while (n != 0) {
//         rev=n%10;
//         rem=rem*10+rev;
//         n=n/10;
//         }
//     if (orig == rem) {
//         printf("pal");
//     }
//     else {
//         printf("no pal");
//     }
// }

// #include <stdio.h>
// #include<string.h>
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     // fgets(str,100,stdin);
//     scanf("%s",str);
//     printf("%s", str);
//
//     // puts(str);
//     return 0;
// }
// int main() {
//     char str[100];
//     int count=0;
//     printf("Enter a string: ");
//     // scanf("%s",& str);
//
//     fgets(str,sizeof(str),stdin);
//     int n = strlen(str);
//     for ( int i  = 0 ; str[i] != '\0' ; i++) {
//         if (str[i] != ' ' && str[i]!='\n'){
//             count++;
//         }
//     }
//
//     printf("%d",count);
//
//     return 0 ;
// }

    // int count=0;
    // for (int i = 0 ; str[i]!='\0' ; i++)
    // {
    //     count++;
    // }
    //
    //     printf("the size of string %d",count);
    //     return 0;
    // }
// #include <stdio.h>
// int factorial(int num) {
//     if (num==1 || num==0) return 1;
//     return num*factorial(num-1);
// }
// int main() {
//     int num ;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int fact = factorial(num);
//     printf("Factorial of %d is %d", num, fact);
//     return 0;
// }

// #include <stdio.h>
// void greet(int n) {
//     if (n == 0) return;
//     printf("Good morning\n");
//     greet(n-1);
//     return ;
//
// }
// int main() {
//     int n ; printf("enter the no");
//     scanf("%d",&n);
//     greet(n);
//     return 0;
// }
// #include<stdio.h>
// void sum(int a ,int s ) {
//     if (a==0) {
//         printf("%d",s);
//         return;
//     }
//     sum(a-1,s+a);
//     return;
// }
// int main() {
//     int n ; printf("enter a number: "); scanf("%d", &n);
//     sum(n, 0);
//     return 0;
//
//
// }
#include <stdio.h>
// int  power(int a , int b) {
//     if (b==0) return 1  ;
//     int ans = a*power(a,b-1);
//     return ans ;
//
// }
// int main() {
//     int a,b; printf("enter base and than power"); scanf("%d %d",&a,&b);
//     int p = power(a,b);
//     printf("the power of %d raised to power %d is --> %d",a,b,p);
//     return 0;
// }
// int feb(int n) {
//     if (n==1 || n==2) return 1;
//     return feb(n-1)+feb(n-2);
// }
// int main() {
//     int n ; printf("enter n ");
//     scanf("%d", &n);
//     printf("%d", feb(n));
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int arr[4];
//     for (int i =0 ; i<=4 ; i++) {
//         printf("enter element at index--> %d: ", i);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0 ; i<=4 ; i++) {
//         printf("%d ", arr[i]);
//     }
//
//     return 0 ;
// }

// #include<stdio.h>
// int main() {
//     int arr[6] = {34,65,17,23,25,100};
//     for (int i ; i<6 ; i++ ) {
//         if (arr[i]<=35) {
//             printf("%d ", arr[i]);
//         }
//
//
//     }
//     return 0;
//
// }
#include<stdio.h>










