// //
// // Created by Tanish Sharma on 23-09-2025.
// //
//
//
//
// #include <stdio.h>
// int main() {
//     // An array storing different ages
//     int n ;
//
//     printf("enter the arrays");
//     scanf("%d",&n);
//     int ages[n];
//
//
//     int i;
//
//
//     int length = sizeof(ages) / sizeof(ages[0]);
//
//     // Create a 'lowest age' variable and assign the first array element of ages to it
//     int lowestAge = ages[0];
//     ​
//       // Loop through the elements of the ages array to find the lowest age
//       for (i = 0; i < length; i++) {
//
//           // Check if the current age is smaller than current the 'lowest age'
//           if (lowestAge > ages[i]) {
//
//               // If the smaller age is found, update 'lowest age' with that element
//               lowestAge = ages[i];
//           }
//       }
//
//     // Output the value of the lowest age
//     printf("The lowest age in the array is: %d", lowestAge);
//
//     return 0;
// }
// #include <stdio.h>
//
// int main() {
//     int n;
//
//     // Ask user for size of array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//
//     int arr[n];  // declare array of size n
//
//     // Taking input for array
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ",arr[i]);
//     }
//
//     return 0;
// }

// #include <stdio.h>
//
// int main() {
//     int n, i;
//
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//
//     int arr[n];   // array declaration
//
//     // taking input
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//
//     }
//
//     // printing whole array
//     printf("Array elements are: ");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//
//     }
//
//
//     return 0;
// }



#include <stdio.h>

int main() {
    char greetings []= "Hello World!";
    printf("%s", greetings);

    return 0;
}
