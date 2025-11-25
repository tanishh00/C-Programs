 #include<stdio.h>
int main() {
    int i,n ;
    printf("enter the no");
    scanf("%d",&n);
    int counter = 0;
    while (n!=0) {
        n=n/10;
        counter++;
    }
    printf("%d",counter);
    return 0;

}
