/*#include <stdio.h>
int main() {
    int month,day,year;;
    printf("enter a date in form of mm/dd/yyyy");
    scanf( "%d/%d/%d",&month,&day,&year);
    printf("you enter a date %04d%02d%02d.\n",year,month,day);
    return 0 ;
} */

// #include<stdio.h>
// int main() {
//     int m ,d ,y;
//     printf("enter date in the form of mm/dd/yyyy : ");
//     scanf("%d/%d/%d",&m,&d,&y);
//     printf("%04d%02d%02d",y,m,d);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n,i;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     if(){
//         printf("The number is an prime number\n");
//     }
//     else {
//         printf("not a prime number\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a;
//     printf("enter the year-->");
//     scanf("%d", &a);
//     if (a%4==0 && a%100!=0||a%400==0) {
//         printf("yuhh its a leap year");
//
//     }
//     else {
//         printf("yuhh its a not a leap year");
//     }
//     return 0;
// }

#include <stdio.h>
// int main() {
//     int a;
//     printf("enter the number-->");
//     scanf("%d", &a);
//
//     if (a%5==0) {
//
//         if (a%3==0) {
//             printf("%d->  is divisible by 5 and 3",a);
//         }
//         else {
//             printf("not divisible by 3 but divisible by 5");
//         }
//
//
//     }
//
//     else {
//         printf("%d->  is not divisible by 5 and 3",a);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     for (int i =0;i<=100;i++) {
//             if (i%5==0) {
//                 printf("%d-->divisible by 5\n",i);
//             }
//             else if (i%3==0) {
//                 printf("%d-->divisible by 3\n",i);
//             }
//             else if (i%5==0 && i%3==0) {
//                 printf("%d-->divisible by 3 and 5 both\n",i);
//                 }
//
//
//             else {
//
//             }
//
//
//     }
//
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int a,b,c,greatest;
//     printf("Enter the first number: ");
//     scanf("%d",&a);
//     printf("Enter the second number: ");
//     scanf("%d",&b);
//     printf("Enter the third number: ");
//     scanf("%d",&c);
//     if (a>b && a>c && b>c) {
//         greatest=a;
//
//
//     }
//     else if (b>a && b>c && a>c) {
//         greatest=b;
//
//     }
//     else {
//         greatest=c;
//
//     }
//     printf("The greatest number is %d",greatest);
//     return 0;
// }

// WAP to print min and max number in array
// WAP TO Search the element in array
// 1) by element
// 2) by indexing
#include <stdio.h>

#include <stdio.h>

int main() {
    int ele;
    int a[] = {1, 243, 123, 543, 2, 44};
    int size = sizeof(a) / sizeof(a[0]);  // Get actual size of array

    printf("Enter the element to search: ");
    scanf("%d", &ele);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == ele) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element present\n");
    else
        printf("Element not present\n");

    return 0;
}