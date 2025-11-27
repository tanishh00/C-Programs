// #include <stdio.h>
// #include <string.h>
//
// int main() {
//     char str[30];
//     puts("Enter a string: ");
//     scanf("%[^\n]s", str);   // safer, correct format
//
//     printf("You entered: %s\n", str);
//
//     int size = strlen(str);
//
//
//     for (int i = 0, j = size - 1; i < j; i++, j--) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
//
//     printf("The rev of the string is: %s\n", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    puts("Enter a string: ");
    scanf("%[^\n]s", str);   // safer, correct format

    printf("You entered: %s\n", str);
    
    printf("The rev of the string is: %s\n", str);
    return 0;
}