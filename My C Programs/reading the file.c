
#include<stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("C:\\Test\\file.txt","r");
//     char mystring[100];
//     fgets(mystring,100,fptr);
//     printf("%s",mystring);
//     fclose(fptr);
//     return 0 ;
// }


#include<stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("C:\\Test\\file.txt","r");
//
//     if(fptr == NULL) {
//         printf("Not able to open the file.");
//     }
//     fclose(fptr);
//     return 0 ;
// }
#include <stdio.h>

int main() {
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("C:\\Test\\file.txt", "r");
    char myString[100];
    if(fptr != NULL) {
        while(fgets(myString, 100, fptr)) {
            printf("%s", myString);
        }
    } else {
        printf("Not able to open the file.");
    }
    fclose(fptr);

    return 0;
}