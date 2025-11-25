#include<stdio.h>
int main() {
    int row,col;
    printf("enter the no of rows and col");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("enter the elements in 2d array");
    for (int i =0;i<row;i++) {
        for (int j=0;j<col;j++) {
            scanf("%d",&arr[i][j]);
        }

    }
    for (int i =0;i<row;i++) {
        for (int j=0;j<col;j++) {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
    int element,pos;
    printf("enter the element");
    scanf("%d",&element);
    printf("enter the index you want to add");
    scanf("%d",&pos);
    int size=col*(sizeof(arr)/sizeof(arr[0]));
    printf("%d",size);
    return 0;

}
