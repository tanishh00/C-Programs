int main() {
    int arr[4]={1,3,4,5};
    int prod=1;
    for (int i=0;i<4;i++) {
        prod = prod * arr[i];
    }
    printf("%d",prod);
    return 0 ;
}

int main() {
    int n ;
    printf("enter the value of n:--> ");
    scanf("%d",&n);
    int arr[n];
    for (int i =0 ; i<n ; i++)
        scanf("%d",&arr[i]);
    for (int i =0 ; i<n ; i++)
        printf("%d ",arr[i]);
    return 0;
}
