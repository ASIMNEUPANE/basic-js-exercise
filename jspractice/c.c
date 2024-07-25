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
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i = 0; i<5;i++){
//         for(int j=0; j<=i; j++){
//             printf("%d\t", arr[j]);
//         }
//         printf("\n");

//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     char str[4]="asim";
//     for(int i = 0; i<4; i++){
//         for(int j = 0; j<=i; j++){
//             printf("%c ",str[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int num[5]= {1,2,3,4,5};

//     for(int i = 0; i<5; i++){
//         for(int j = 0 ; j <i ; j++){
//             printf(" ");

//         }
//         for(int k= i ; k <5;k++){
//                 printf("%d ", num[k]);
//             }
//         printf("\n");

//     }
//     return 0;
// }

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

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("  ");
//         }
//         for (int k = i; k < 5; k++)
//         {
//             printf("%d ", arr[k]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
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

// int main()
// {
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

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double base, exponent;
//     printf("x");
//     scanf("%lf", &base);
//     printf("y");
//     scanf("%lf", &exponent);

//     double result = pow(base, exponent);
//     printf("%.lf", result);

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
// int main()
// {
//     int num[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//     int sum = 0;

//     int *ptr = num;
//     for (int i = 0; i < 10; i++)
//     {
//         sum += ptr[i];
//     }
//     printf("sum of all number is %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double x, y;
//     printf("Enter x value ");
//     scanf("%lf", &x);
//     printf("Enter y value ");
//     scanf("%lf", &y);

//     double result = pow(x, y);
//     printf("%2lf^%2lf = %2lf\n ", x, y, result);
//     return 0;
// }

// #include <stdio.h>

// int isPrime(int num){
//     if(num <=1){
//         return 0;
//     }
//     for(int i = 2 ; i*i < num ;i++){
//         if(num % i ==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n ;
//     printf("print");
//     scanf("%d",&n);

//     (isPrime(n)) ? printf("prime"):printf("composite");
// }

// int isPrime(int numb) {
//     if (numb <= 1) {
//         return 0;
//     }

//     for (int i = 2; i * i <= numb; i++) {
//         if (numb % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     int numb;
//     printf("Enter a number: ");
//     scanf("%d", &numb);

//     if (isPrime(numb)) {
//         printf("%d is a prime number\n", numb);
//     } else {
//         printf("%d is a composite number\n", numb);
//     }

//     return 0;
// }

// #include <stdio.h>

// int isPrime(int numb)
// {
//     if (numb <= 1)
//     {
//         return 0;
//     }

//     for (int i = 2; i * i <= numb; i++)
//     {
//         if (numb % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int count = 0;

//     for (int numb = 100; numb <= 500; numb++)
//     {

//         if (isPrime(numb))
//         {
//             count++;

//             printf("%dis prime number \n", numb);
//         }
//     }
//     printf("%dis prime number \n", count);

//     return 0;
// }

// Write a C program using structure that reads the record of 35 students with member’s roll, name, address and makes and display the records of students who have obtained greater than 250 marks.

// #include <stdio.h>

// struct Student
// {
//     int roll;
//     char name[50];
//     char address[100];
//     int marks;
// };

// int main()
// {

//     struct Student students[35];

//     for (int i = 0; i < 35; i++)
//     {
//         printf("Enter details for student %d:\n", i + 1);
//         printf("Roll: ");
//         scanf("%d", &students[i].roll);
//         printf("Enter the name of the student :");
//         scanf("%s", students[i].name);
//         printf("Enter the adress of the student :");
//         scanf("%s", students[i].address);
//         printf("Enter the marks of the student :");
//         scanf("%d", &students[i].marks);
//     }
//     printf("\nStudents with more than 250 marks:\n");

//     for (int i = 0; i < 35; i++)
//     {
//         if ( students[i].marks > 250) {
//             printf("Roll: %d, Name: %s, Address: %s, Marks: %d\n", students[i].roll, students[i].name, students[i].address, students[i].marks);
//         }

//         }
//         return 0;
// }

//  Write a c program to store the player name, runs scored, wickets taken of 20 cricketers
//  using structure along with pointer then arrange the players in order of maximum wickets
//  to minimum wickets they had taken.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Player
// {
//     char name[50];
//     int scored;
//     int wicketTaken;
// };
// int main()
// {

//     struct Player *players[20];

//     for (int i = 0; i < 20; i++)
//     {
//         printf("enter details of players %d", i + 1);
//         printf("name :");
//         scanf("%s", players[i]->name);
//         printf("scored :");
//         scanf("%d", &players[i]->scored);
//         printf("wicketTaken :");
//         scanf("%d", &players[i]->wicketTaken);
//     }

//     // BUbble sort

//     for(int i = 0; i<19; i++){
//         for(int j = 0; j<19-i; j++){
//             if(players[j]->wicketTaken< players[j+1]->wicketTaken){
//             // if(players[j]->wicketTaken< players[j+1]->wicketTaken){--------- min to max logic
//                 struct Player* temp = players[j];
//                 players[j]= players[j+1];
//                 players[j+1]=temp;
//             }
//         }
//     }

//     printf("\n Playes in order of maximum to minimum wickets taken:\n");
//     for (int i = 0; i < 20; i++)
//     {
//         printf("Name: %s, Scored: %d, Wickets Taken: %d\n", players[i]->name, players[i]->scored, players[i]->wicketTaken);
//     }
//     return 0;
// }

// wite a c program to enter bid , title , price , pages of 100 books into stucture variable called book and sort them in desending order on the basics of their title with use of pointer.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Book
// {
//     int bid;
//     char title[50];
//     int price;
//     int pages;
// };

// int main()
// {
//     struct Book* books[5];

//     for (int i = 0; i < 5; i++)
//     {
//         books[i] = (struct Book*)malloc(sizeof(struct Book));
//         printf("Enter details for book %d:\n", i + 1);
//         printf("Bid: ");
//         scanf("%d", &books[i]->bid);
//         printf("Title: ");
//         scanf("%s", books[i]->title);
//         printf("Price: ");
//         scanf("%d", &books[i]->price);
//         printf("Pages: ");
//         scanf("%d", &books[i]->pages);
//     }

//     // Bubble sort
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4 - i; j++)
//         {
//             if (strcmp(books[j]->title, books[j + 1]->title) < 0)
//             {
//                 struct Book* temp = books[j];
//                 books[j] = books[j + 1];
//                 books[j + 1] = temp;
//             }
//         }
//     }

//     printf("\nBooks in descending order of title:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Bid: %d, Title: %s, Price: %d, Pages: %d\n", books[i]->bid, books[i]->title, books[i]->price, books[i]->pages);
//         free(books[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student
// {
//     int rollNo;
//     char name[50];
//     char address[50];
// };

// int main()
// {

//     struct Student* students[5];

//     for (int i = 0; i < 5; i++)
//     {

//         students[i] = (struct Student*)malloc(sizeof(struct Student));
//         printf("enter studen : %d ", i + 1);
//         printf("rool no : ");
//         scanf("%d", &students[i]->rollNo);
//         printf("name : ");
//         scanf("%s", students[i]->name);
//         printf("address: ");
//         scanf("%s", students[i]->address);
//     }

//     for(int i = 0; i<5; i++){
//         if(strcmp(students[i]->address ,"kathmandu") == 0){
//          printf("name : %s \n", students[i]->name);
//                  free(students[i]);

//         }
//     }
//     return 0;
// }

// ---------------------Stucture qeustion ------------------

//   ## 1

//  Write a C program using structure that reads the record of 35 students
//  with member’s roll, name, address and makes and display the records of students
// who have obtained greater than 250 marks.

// #include <stdio.h>
// #include <stdlib.h>

// struct Student {
//     int roll;
//     char name[50];
//     char address[50];
//     int marks;
// };

// int main() {
//     struct Student* students[35];

//     for(int i = 0; i < 35; i++) {
//         students[i] = (struct Student*) malloc(sizeof(struct Student));
//         printf("Enter details for student %d:\n", i+1);
//         printf("Roll: ");
//         scanf("%d", &students[i]->roll);
//         printf("Name: ");
//         scanf("%s", students[i]->name);
//         printf("Address: ");
//         scanf("%s", students[i]->address);
//         printf("Marks: ");
//         scanf("%d", &students[i]->marks);
//     }

//     printf("\nStudents with more than 250 marks:\n");
//     for(int i = 0; i < 35; i++) {
//         if(students[i]->marks > 250) {
//             printf("Roll: %d, Name: %s, Address: %s, Marks: %d\n", students[i]->roll, students[i]->name, students[i]->address, students[i]->marks);
//         }
//         free(students[i]);
//     }

//     return 0;
// }

//                #2

//  Write a c program to store the player name, runs scored, wickets taken of 20 cricketers
//  using structure along with pointer then arrange the players in order of maximum wickets
//  to minimum wickets they had taken.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Player{
// char name[50];
// int runs;
// int wicketTaken;
// };

// int main(){

// struct Player* players[20];

// for(int i =0; i<20;i++){

// players[i]= (struct Player*)malloc(sizeof (struct Player));
// printf("ENter a details of players no. %d ", i+1);

// printf("name :");
// scanf("%s", players[i]->name);
// printf("runs :");
// scanf("%d", &players[i]->runs);
// printf("wicketTaken :");
// scanf("%d", &players[i]->wicketTaken);
// }

// for(int i =0; i<19; i++){
//     for(int j = 0 ; j<19 - i ; j++){
//         if(players[j]->wicketTaken<players[j+1]->wicketTaken){
//             struct Player* temp = players[j];
//             players[j]= players[j+1];
//             players[j+1]= temp;
//         }
//     }
// }

// printf("\n Playes in order of maximum to minimum wickets taken:\n");
//     for (int i = 0; i < 20; i++)
//     {
//         printf("Name: %s, Scored: %d, Wickets Taken: %d\n", players[i]->name, players[i]->runs, players[i]->wicketTaken);
//     }
//     return 0;

// }

//  # question number 3--------------
// wite a c program to enter bid , title , price , pages of 100 books into stucture variable called book
//  and sort them in desending order on the basics of their title with use of pointer.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Book{
//     int bid;
//     char title[50];
//     int price;
//     int pages;
// };

// int main(){
//     struct Book* books[100];

// printf("Enter the details of the books");

// for(int i = 0; i<100; i++){
//     books[i]= (struct Book*)malloc( sizeof(struct Book));
//     printf("Enter the details of books no : %d ", i+1);
//     printf("bid :");
//     scanf("%d", &books[i]->bid);
//     printf("title :");
//     scanf("%s", books[i]->title);
//     printf("price :");
//     scanf("%s", &books[i]->price);
//     printf("Pages :");
//     scanf("%s", &books[i]->pages);

// }

// for(int i = 0 ; i <99; i++){
//     for(int j = 0 ; j < 99-i; j++){
//         if(strcmp(books[j]->title, books[j+1]->title) <0){

//            struct Book* temp = books[j];
//            books[j]= books[j+1];
//            books[j+1]= temp;

//         }
//     }
// }

// printf("maximum to minimum");
// for(int i = 0 ; i<100; i++){
//     printf("bid : %d ", books[i]->bid);
//     free(books[i]);
// }

// }

// write a program to calculate sum of the natural number up to N number using recursive function.

// #include <stdio.h>

// int sumOfNaturalNumbers(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return n + sumOfNaturalNumbers(n - 1);
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter a positive number : ");
//     scanf("%d", &num);
//     printf("sum = %d ", sumOfNaturalNumbers(num));
//     return 0;
// }

// program to generate fivonacci series up to n terms using resursive dunction.

// #include <stdio.h>

// int fib(int n){
//   if( n== 0)
//   return 0;
//   if(n==1)
//   return 1;
//   else
//   return fib(n-1)+fib(n-2);
// }

// int main(){
// int n ;
// printf("Enter n :");
// scanf("%d", &n);
// printf("\n Fibonacci number up to %d term:\n",n);
// for(int i = 0; i<n; i++){
//     printf("%d\t", fib(i));
// }
// return 0;
// }

// find the max and min value in array ;

// #include <stdio.h>

// int main()
// {
//     int data[5];

//     printf("enter 5 number : ");

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &data[i]);
//     }
//      int max = data[0];
//     int min = data[0];

//     for (int i = 0; i < 5; i++)
//     {
//         if (data[i] > max)
//             max = data[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (data[i] < min)
//             min = data[i];
//     }
//     printf("%d\n", max);
//     printf("%d", min);
//     return 0;
// }

//  find the max and min of array using DMA

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, i, *ptr, min, max;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     ptr = (int*) malloc(n * sizeof(int));
//     if(ptr == NULL) {
//         printf("Memory not allocated.\n");
//         exit(0);
//     }

//     printf("Enter elements: ");
//     for(i = 0; i < n; i++) {
//         scanf("%d", ptr + i);
//     }

//     min = max = ptr[0];

//     for(i = 1; i < n; i++) {
//         if(ptr[i] < min) {
//             min = ptr[i];
//         }
//         if(ptr[i] > max) {
//             max = ptr[i];
//         }
//     }

//     printf("Minimum = %d\n", min);
//     printf("Maximum = %d", max);

//     free(ptr);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int sec, min, hr, rsec;
//     printf("enter a second");
//     scanf("%d", &sec);
//     hr= sec/3600;
//     rsec= sec%3600;
//     min= rsec/60;
//     sec= min%60;

//     printf("%d hr , %d min, %d sec ",hr,min,sec);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char stri[10];

//     printf("enter a capital letter");
//     scanf("%[A-z]", stri);

//     printf("%s", stri);
//     return 0;
// }

// #include <stdio.h>

// long power(int b ,int  n){
// if (n == 0)
// return 1;
// else
// return b * power(b, n-1);
// }
// int main(){
//     int b,n;
//     long p;
//     printf("Enter 2 number");
//     scanf("%d%d",&b,&n );
//     p = power(b,n);
//     printf("answer is : %d", p);
//     return 0;

// }

//  find the max and min of array using DMA


// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int n ;
//     int *ptr ;

// printf("Enter the size");
// scanf("%d",&n);

// ptr = (int* )malloc(n* sizeof(int));

// if(ptr== NULL){
//     exit(0);
// }

// printf("Print enter");
// for(int i =0; i<n; i++){
//     scanf("%d", ptr+i);
// }

// int min = ptr[0];
// int max=ptr[0];

// for(int i = 0; i<n;i++){
// if(ptr[i]<min){
//     min = ptr[i];
// }
// if(ptr[i]>max){
//     max= ptr[i];
// }
// }
// printf("%d\t", max);
// printf("%d", min);

// return 0;



// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Book{
//     int bid;
//     char title[50];
//     int pages;
//     int price;
// };

// int main(){

// struct Book* books[100];

// printf("Enter a books details");

// for(int i= 0; i<100; i++){
//     books[i]= (struct Book* )malloc(sizeof(struct Book));
//     printf("Enter books no .%d", i+1);
//     printf("bid :");
//     scanf("%d", &books[i]->bid);
//     printf("title :");
//     scanf("%s", books[i]->title);
//     printf("price :");
//     scanf("%s", &books[i]->price);
//     printf("Pages :");
//     scanf("%s", &books[i]->pages);

// }

// for(int i = 0 ; i<99; i++){
//     for(int j = 0 ; j<99-i; j++){
//         if(strcmp(books[j]->title, books[j+1]->title) <0){
//             struct Book* temp = books[j];
//             books[j]= books[j+1];
//             books[j+1]= temp;
//         }
//     }
// }

// for(int i = 0 ; i <100; i++){
//     printf()
//     free(books[i]);
// }
// return 0;

// }
