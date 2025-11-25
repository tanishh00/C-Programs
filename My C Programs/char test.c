// #include <stdio.h>
// int main() {
//     char ch = 'Z';   // character
//     printf("Character: %c\n", ch);     // prints as character
//     printf("ASCII Value: %d\n", ch);   // prints ASCII value
//     return 0;
// }

#include<stdio.h>
int main() {
    float f;
    printf("Enter a value : ");
    scanf("%f",&f);
    int d=(int)f;
    printf("the value %f ASCII value is %d",f,d);
    return 0;
}
