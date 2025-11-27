#include <stdio.h>
#include<string.h>
int main() {
    char str[30];
    puts("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("You entered:%s\n", str);
    // int size = strlen(str);
    int i=0,size = 0;

    while (str[i] !='\0') {
        size++;
        i++;
    }
    printf("The size of the string is: %d\n", size);
    return 0;

}