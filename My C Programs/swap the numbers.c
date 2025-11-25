#include<stdio.h>
int main() {
    int a,b,c,choice;
    printf("enter the value of A and B using(,):");
    scanf("%d,%d",&a,&b);
    printf("Enter the choice: 1 to rum first code and 2 for second code and 3 to exit");
    scanf("%d",&choice);
    if (choice==1) {
        c=a;
        a=b;
        b=c;
        printf("the  value of a:%d and the value of b:%d",a,b);
    }
    else if (choice==2) {
        a+=b;
        b=a-b;
        a-=b;
        printf("the  value of a:%d and the value of b:%d",a,b);
    }
    else {
        printf("");
    }
    return 0;
}