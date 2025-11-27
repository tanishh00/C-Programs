// #include <stdio.h>
// int main() {
//     char str[]="this is the c lion app in which programmers write codes and etc";
//     int i = 0;
//     while (str[i]!='\0') {
//         printf("%c",str[i]);
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// int main() {
//     char str[]="This is the Clion app in which programmers execute their codes";
//     puts(str);
//
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[]="This is string";
//     puts("hello guys");
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    // scanf("%s", str); // only the first word will be considered
    // gets(str); // prints the whole string you have written
    //there is another way of printing from the scanf function
    scanf("%[^\n]s", str);

    printf("You entered: %s\n", str);

    return 0;
}