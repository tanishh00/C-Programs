/**#include <stdio.h>
int main(void)
{
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        i++;
    }
    return 0;
}
**/


#include <stdio.h>

int main() {
    int i = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
