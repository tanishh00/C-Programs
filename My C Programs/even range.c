#include <stdio.h>
int main() {
 int s;
 printf("enter starting point:");
 scanf("%d",&s);
 int e;
 printf("enter end point:");
 scanf("%d",&e);
 int i;
 while(s!=e) {
  i=s%2;
  if (i==0) {
   printf("even number:%d\n",s);
  }
  s++;
 }
}
