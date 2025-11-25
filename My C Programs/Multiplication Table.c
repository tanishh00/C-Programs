#include <stdio.h>
int main() {
    int no;
    int m;
    int i=0;
    printf("enter the no whom you wanna multiply");
    scanf("%d",&no);
    for (i=1;i<=10;i++) {
        m=no*i;
        printf("\n %d X %d = %d ",no,i,m);
    }
    return 0;
}


#include <stdio.h>
int main() {
    int n;
    int mult;
    int j =0;
    int i = 0;
    printf("enter number:");
    scanf("%d", &n);
    for (i=1; i<=10; i++) {
        for (j=1; j<=10; j++) {
            printf("%dx%d = %d, ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main() {
 int j, i, n;

 printf("Input upto the table number starting from 1 : ");
 scanf("%d", &n);


 for (i = 1; i <= 10; i++) {
  for (j = 1; j <= n; j++) {
   printf("%dx%d = %d, ", j, i, i * j);
  }
  printf("\n");
 }

 return 0;
}

#include<stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for (int i=n;i<=(n*10);i=i+n) printf("%d  ",i);
}

