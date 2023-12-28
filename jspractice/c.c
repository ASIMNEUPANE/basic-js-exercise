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
