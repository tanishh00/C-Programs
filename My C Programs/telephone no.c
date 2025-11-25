/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number in format (xxx) xxx-xxxx:");
    scanf("(%2d) %2d-%3d", &a, &b, &c);
    printf("your no.:%d.%d.%d \n",a,b,c);
    return 0;
    */
#include <stdio.h>

int main() {
    int area, prefix, line;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &prefix, &line);

    printf("You entered %d.%d.%d\n", area, prefix, line);

    return 0;
}
