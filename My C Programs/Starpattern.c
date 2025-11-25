//WAP to print right angle triangle
//*
//**
//***

// #include <stdio.h>
// int main() {
//     int i,j;
//     int n ;
//     int a;
//     printf("enter the no of rows you want to print");
//     scanf("%d",&n);
//     for (i = 0; i <n; i++) {
//         for (j=0;j<=i;j++) {
//             printf("%d",j+1);
//         }
//         printf("\n");
//
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i,j;
//     int n ;
//     int a=0;
//     printf("enter the no of rows you want to print");
//     scanf("%d",&n);
//     for (i = 0; i <n; i++) {
//         for (j=0;j<=i;j++) {
//             a++;
//             printf("%d",a);
//         }
//         printf("\n");
//
//     }
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int i,j;
//     int n ;
//     int a=1;
//     printf("enter the no of rows you want to print");
//     scanf("%d",&n);
//     for (i = 0; i <n; i++) {
//         for (j=0;j<=i;j++) {
//
//             printf("%d",a);
//         }
//         a++;
//         printf("\n");
//
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i,j;
//     int n=4 ;
//     int a=1;
//     for (i = 0; i <n; i++) {
//         for (j=0;j<=i;j++) {
//
//             printf("%d",a+j);
//
//         }
//
//         printf("\n");
//
//     }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int i,j;
//     int n = 4;
//     char a;
//     for(i=0;i<n;i++) {
//         for(j=0;j<=i;j++) { // first statement ko false kerna hai
//             printf("%c",'a'+j);
//         }
//         printf("\n");
//     }
//     return 0 ;
// }

// #include<stdio.h>
// int main() {
//     int i,j;
//     int n=4;
//     char A ;
//     for (i=0; i<n; i++) {
//         for (j=0; j<=i; j++) {
//             printf("%c",'A'+j) ;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i,j,n=4;
//     char A;
//     for (i=0; i<n; i++) {
//         for (j=0; j<=i; j++) {
//
//             printf("%c",'A'+i) ;
//
//
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int i, j, n = 5;
//     char ch = 'A';   // start from 'A'
//
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("%c", ch);
//             ch++;   // nye alphabet ke lie
//         }
//         printf("\n");
//     }
//     return 0;
// }
//
//
//
// #include <stdio.h>
// int main() {
//     int n=4;
//     int i,j;
//     for (i=0;i<n;i++) {
//         for (j=0;j<=i;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
//
// }
 // #include <stdio.h>
 // int main() {
 //     int n=4;
 //     int i,j;
 //    int c=0;
 //     for (i=1;i<n;i++) {
 //         for (j=1;j<=i;j++) {
 //             c++;
 //             printf("%d",c);
 //         }
 //
 //
 //         printf("\n");
 //     }
 //     return 0;
 // }

//  #include <stdio.h>
//
// int main(){
//     int n = 45;
//     float m = 32.23;
//
//     n = (int) m; // convert the data type to int
//     printf("%d\n", n);
//     return 0;
// }

// recursion function
// 1) direct
// 2) indirect
//
// void test() {
//     void test2();
//     {
//         test();
//     }
//     void test3();{
//         void test2();
//     }
// }
// int main() {
//     test();
// }

// #include <stdio.h>
// int main() {
//  int x;
//  int y;
//  int z;
//  int re=0;
//  printf("Enter the x: ");
//  scanf("%d", &x);
//  printf("Enter the y: ");
//  scanf("%d", &y);
//  printf("Enter the z: ");
//  scanf("%d", &z);
//  int x1=(x*x);
//  int y1=(y*y);
//  int z1=(z*z);
//  re=((x1*y)+(x1*y1)+(x*z1));
//  printf("the result is %d",re);
//  return 0;
// }



