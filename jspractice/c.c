// #include <stdio.h>

// int main() {
//     int numbers[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
//     int target, index = -1;

//     printf("Enter the element to search: ");
//     scanf("%d", &target);

//     for (int i = 0; i < 10; i++) {
//         if (numbers[i] == target) {
//             index = i;
//             break;
//         }
//     }

//     if (index != -1) {
//         printf("Element %d found at index %d\n", target, index);
//     } else {
//         printf("Element %d not found in the array\n", target);
//     }

//     return 0;
// }

// 2. Variables and Data Types:

// #include <stdio.h>

// int main(){
//     int integerVar = 42;
//     float floatVar = 3.14;
//     char charVAr = 'A';

//     printf("Integer : %d\n", integerVar);
//     printf("floatVar %f\n", floatVar);
//     printf("charVar %c\n", charVAr);

//     return 0;
// }

// 3. User Input:
// #include <stdio.h>

// int main() {
//     // Variable declaration
//     int userInput;

//     // Get user input
//     printf("Enter an integer: ");
//     scanf("%d", &userInput);

//     // Display user input
//     printf("You entered: %d\n", userInput);

//     return 0;
// }

// Control Structure (if-else);

// #include <stdio.h>

// int main(){
//     int num;

//     printf("Enter your age : ");
//     scanf("%d", &num);

//     if(num>=18){
//         printf("You are eligible for the license\n");
//     }
//     else{
//         printf("Your are not Elegible for license");
//     }
//     return 0;
// }

// Array in c

// 1 1. Declaration and Initialization:

// #include <stdio.h>

// int main()
// {
//     int numbers[5] = {5, 6, 7, 4, 5};
//     int index = 0;

//     printf("Enter the index you want to access: ");
//     scanf("%d", &index);

//     if (index >= 0 && index < 5)
//     {
//         printf("you have search for  %d is: %d\n", index, numbers[index]);
//     }
//     else
//     {
//         printf("Error: Index out of bounds.\n");
//     }
//     return 0;
// }

// 2. 2. Accessing Array Elements:

// #include <stdio.h>

// int main(){
//     int numbers[5]= {5,6,7,8,9};

//     for(int i =0 ; i<5; i++){
//         printf("Element at index %d: %d\n", i , numbers[i]);
//     }
//     return 0;
// }

// 3 User Input with Arrays:

// #include <stdio.h>

// int main(){
//     int size;
//     printf("Enter a size for an Array ");
//     scanf("%d", &size);
//     int arr[size];

//     printf("Enter %d elements:\n", size);

//     for(int i = 0 ; i<size ;i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("Entered array of element : ");

//     for(int i = 0; i<size; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;

// }

// 4. MultiDimensional Arrays:

// #include <stdio.h>

// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

//     for(int i = 0 ; i <3 ; i++){
//         for(int j=0; i<3; j++){
//             printf("%d", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // Declaration and initialization of a 3D array
//     int cube[2][3][4] = {
//         {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
//         {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}
//     };

//     // Accessing and printing elements of a 3D array
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             for (int k = 0; k < 4; k++) {
//                 printf("cube[%d][%d][%d] = %d\n", i, j, k, cube[i][j][k]);
//             }
//         }
//     }

//     return 0;
// }

// ## Pointers

// #include <stdio.h>
// int main(){
//     int num = 43;
//     int *ptr;

//     ptr = &num;
//     printf("Value of num : %d\n", num); -43
//     printf("Address of num : %u\n", &num); -addrress of num 6422300
//     printf("Value using pointer: %u\n", ptr); addres inside pointer 6422300
//     printf("Address of ptr : %u\n", &ptr); address of pointer 6422296
//     printf("value of ptr : %u\n", *ptr);value of pointer inside the pointer address

//     return 0;
// }

// 2 Pointer Arithmetic;

// #include <stdio.h>
// int main()
// {
//     int arr[5] = {5, 6, 7, 8, 9};
//     int *ptr ;
//     ptr = arr;

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Element %d: %d\n", i, ptr[i]);
//     }
//     return 0;
// }

// 3 Dynamic Memory Allocation :

// WOP to sum 10 number using pointer ;
// #include <stdio.h>

// int main()
// {
//     int numbers[10];
//     int sum = 0;
//     printf("Enter 10 muber :");
//     for (int i = 0; i < 10; ++i)
//     {
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &numbers[i]);
//     }

//     int *ptr = numbers;
//     for (int i = 0; i < 10; ++i)
//     {
//         sum += ptr[i];
//     }
//     printf("Sum of the 10 number is %d\n ", sum);
//     return 0;
// }

// #include <graphics.h>

// int main() {
//     // Initialize the graphics system
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

//     // Set the color of the circle
//     setcolor(RED);

//     // Draw a circle at coordinates (300, 200) with radius 50
//     circle(300, 200, 50);

//     // Close the graphics system
//     closegraph();

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", arr[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include <stdio.h>

// int main() {
//     char word[] = "UNIVERSITY";

//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%c ", word[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// U
// U N
// U N I
// U N I V
// U N I V E
// U N I V E R
// U N I V E R S
// U N I V E R S I
// U N I V E R S I T
// U N I V E R S I T Y

// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     for (int i = 0; i < 5; i++) {
//         // Print leading spaces
//         for (int k = 0; k < i; k++) {
//             printf("  ");
//         }

//         // Print elements
//         for (int j = i; j < 5; j++) {
//             printf("%d ", arr[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// 1 2 3 4 5
//   2 3 4 5
//     3 4 5
//       4 5
//         5

// #include <stdio.h>

// int main() {
//     // Bitwise AND operation
//     int a = 5;   // binary: 0101
//     int b = 3;   // binary: 0011

//     int result = a & b;  // binary result: 0001 (decimal: 1)

//     printf("Result of bitwise AND: %d\n", result);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int target, index = -1;

//     printf("enter number :");
//     scanf("%d", &target);

//     for (int i = 0; i < 10; i++)
//     {
//         if (num[i] == target)
//         {
//             index = i;
//             break;
//         }
//     }
//     (index != -1) ? printf("Element %d found at index %d\n", target, index)
//                   : printf("Element %d not found in the array\n", target);

//     return 0;
// }

// WAP to find xy using function
// #include <stdio.h>
// #include <math.h>

// int main() {
//     double base, exponent;

//     // Get input from the user
//     printf("Enter the base (x): ");
//     scanf("%lf", &base);

//     printf("Enter the exponent (y): ");
//     scanf("%lf", &exponent);

//     // Calculate x^y using pow function
//     double result = pow(base, exponent);

//     // Display the result
//     printf("%.2lf^%.2lf = %.2lf\n", base, exponent, result);

//     return 0;
// }

// WAP to find sum of 10 number using pointer.

// #include <stdio.h>
// int main()
// {
//     int numbers[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//     int sum = 0;
//     int *ptr = numbers;

//     for (int i = 0; i < 10; i++)
//     {
//         sum += ptr[i];
//     }
//     printf("Total is %d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char word[] = "UNIVERSITY";

//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%c ", word[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", arr[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     for (int i = 0; i < 10; i++)
//     {

//         for (int j = 0; j <= i; j++)
//         {
//             printf("  ");
//         }
//         for (int k = i; k < 10; k++)
//         {
//             printf("%d", number[k]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// WAP to find 10 number using pointer;

// #include <stdio.h>
// int main(){
//     int num[10]={1,1,1,1,1,1,1,1,1,1};
//     int sum = 0;

//     int *ptr = num;
//     for(int i = 0 ; i <10; i++){
//         sum += ptr[i];
//     }
//     printf("sum of all number is %d\n", sum);
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    printf("Enter x value ");
    scanf("%lf", &x);
    printf("Enter y value ");
    scanf("%lf", &y);

    double result = pow(x, y);
    printf("%2lf^%2lf = %2lf\n ", x, y, result);
    return 0;
}