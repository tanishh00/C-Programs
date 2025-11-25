// #include<stdio.h>
// int main() {
//     int item_number,i_price,day,month,year;
//     for (int i = 1;i<=2;i++) {
//         printf("enter Item numer \n");
//         scanf("%d",&item_number);
//         printf("enter the price of the product \n");
//         scanf("%d",&i_price);
//         printf("enter the date in from of mm/dd/yyyy \n");
//         scanf("%d/%d/%d",&day,&month,&year);
//     }
//
//     printf("Item\t\t\tUnit Price\t\t\tPurchase Date \n");
//     printf("%d\t\t\t%d\t\t\t\t%d/%d/%d",item_number,i_price,day,month,year);
//
//
//
//     return 0;
// }

#include <stdio.h>

int main() {
    int item_number[10], i_price[10], day[10], month[10], year[10];
    int n;

    printf("How many items do you want to enter? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter Item number: ");
        scanf("%d", &item_number[i]);

        printf("Enter the price of the product: ");
        scanf("%d", &i_price[i]);

        printf("Enter the date in form of mm/dd/yyyy: ");
        scanf("%d/%d/%d", &month[i], &day[i], &year[i]); // correct order: month/day/year
    }

    printf("\nItem\t\tUnit Price\t\tPurchase Date\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t\t%02d/%02d/%04d\n",
               item_number[i], i_price[i], month[i], day[i], year[i]);
    }

    return 0;
}
