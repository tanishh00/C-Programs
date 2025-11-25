#include<stdio.h>
int main() {
 int i = 0;
 int j;
 printf("enter the end point");
 scanf("%d",&j);
 int c = ((i+j)/2);
 while (i<=c) {
  int even;
  even = i%2;
  if (even==0) {
   printf("%d\n",i);
  }
  i++;
 }
 return 0;
}
