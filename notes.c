//--------------------------------------------------------------------------------------------------------------------//
                                            // C NOTES \\
//--------------------------------------------------------------------------------------------------------------------//

//--------------------------------------------------------------------------------------------------------------------//
                                            // DATA TYPES \\
                                            // BASIC (PRIMITIVE) \\
//--------------------------------------------------------------------------------------------------------------------//

int age = 25;
char grade = 'A';
float salary = 50000.5;
double roon = 324234234234234;

//--------------------------------------------------------------------------------------------------------------------//
                                        // DERIVED (NON PRIMITIVE) \\
//--------------------------------------------------------------------------------------------------------------------//

int numbers[5] = {1, 2, 3, 4, 5};   // Array

int *ptr = &age;                                        // Pointer


struct Person {                                         // Structure
    char name[50];
    int age;
};

union MyUnion {                                         // Union
    int intValue;
    float floatValue;
    char stringValue[20];
};

//--------------------------------------------------------------------------------------------------------------------//
                                            // OPERATORS \\
//--------------------------------------------------------------------------------------------------------------------//

// Arithmetic ( +, -, *, /, % )

int result = a + b;         // addition
int result = a - b;         // subtraction
int result = a * b;         // multiplication
float result = (float)a / b; // division
int remainder = a % b;       // modulus

// Relational ( ==, !=, >, <, >=, <= )

if (a == b) {
// code block
}

if (a != b) {
// code block
}

if (a > b) {
// code block
}

if (a < b) {
// code block
}

if (a >= b) {
// code block
}

if (a <= b) {
// code block
}

// Logical Operators ( &&, ||, ! )

//Logical AND
if (condition1 && condition2) {
// code block
}

//Logical OR
if (condition1 || condition2) {
// code block
}

//Logical NOT
if (!condition) {
// code block
}

//Assignment Operators ( =, +=, .=, *=, /=, %= )

//Assignment
int a = 10;

//Add and Assign
a += b;  // equivalent to a = a + b;

//Subtract and Assign
a -= b;  // equivalent to a = a - b;

//Multiply and Assign
a *= b;  // equivalent to a = a * b;

//Divide and Assign
a /= b;  // equivalent to a = a / b;

// Modulus and Assign
a %= b;  // equivalent to a = a % b;


//Increment and Decrement Operators ( ++, -- )

//Increment
a++;

//Decrement
a--;

//Bitwise Operators ( &, |, ^, ~, <<, >> )

//Bitwise AND
int result = a & b;

//Bitwise OR
int result = a | b;

//Bitwise XOR
int result = a ^ b;

//Bitwise NOT
int result = ~a;

//Left Shift
int result = a << 1;  // left shift a by 1 bit

//Right Shift
int result = a >> 1;  // right shift a by 1 bit

// MISCELLANEOUS OPERATORS

// Conditional Ternary Operator ( ?: )
int result = (a > b) ? a : b;

//Sizeof operator ( sizeof)
int size = sizeof(int);

//Comma Operator (,)
int result = (a++, b++);

//--------------------------------------------------------------------------------------------------------------------//
                                        // CONTROL FLOW \\
//--------------------------------------------------------------------------------------------------------------------//

// Conditional Statements (if, else if, else)

int num = 10;

if (num > 0) {
// code block if 'num' is positive
} else if (num == 0) {
// code block if 'num' is zero
} else {
// code block if 'num' is negative
}

// Switch Statement

int day = 3;

switch (day) {
case 1:
// code block for Monday
break;
case 2:
// code block for Tuesday
break;
case 3:
// code block for Wednesday
break;
// additional cases as needed
default:
// code block for any other day
}

// Loops (for, while, do-while)

// For Loop
for (int i = 0; i < 5; i++) {
// code block to be repeated
}

// While Loop
int counter = 0;
while (counter < 5) {
// code block to be repeated
counter++;
}

// Do-While Loop
int i = 0;
do {
// code block to be repeated
i++;
} while (i < 5);

// Break and Continue statements

for (int i = 0; i < 10; i++) {
if (i == 5) {
break;  // exit the loop if i equals 5
}
if (i % 2 == 0) {
continue;  // skip the rest of the loop for even numbers
}
// code block
}

// Goto statement (use with caution)

int x = 0;

start:
if (x < 5) {
// code block
x++;
goto start;  // jumps to the 'start' label
}

//--------------------------------------------------------------------------------------------------------------------//
// FUNCTIONS \\
//--------------------------------------------------------------------------------------------------------------------//

// Function Declaration
int add(int a, int b);

// Function Definition
int add(int a, int b) {
    return a + b;
}

// Function Call
int result = add(3, 5);

//--------------------------------------------------------------------------------------------------------------------//
// ARRAYS \\
//--------------------------------------------------------------------------------------------------------------------//

// Declaration and Initialization
int numbers[5] = {1, 2, 3, 4, 5};

// Accessing Array Elements
int element = numbers[2];  // Access the third element (index 2)

// Multidimensional Arrays
int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
};

//--------------------------------------------------------------------------------------------------------------------//
// POINTERS \\
//--------------------------------------------------------------------------------------------------------------------//

// Declaration and Initialization
int variable = 10;
int *ptr = &variable;

// Dereferencing
int value = *ptr;

// Pointer Arithmetic
int arr[3] = {1, 2, 3};
int *p = arr;
int secondElement = *(p + 1);  // Access the second element using pointer arithmetic

//--------------------------------------------------------------------------------------------------------------------//
// STRUCTURES \\
//--------------------------------------------------------------------------------------------------------------------//

// Declaration
struct Person {
    char name[50];
    int age;
};

// Initialization
struct Person person1 = {"John Doe", 25};

// Accessing Members
printf("Name: %s, Age: %d", person1.name, person1.age);

//--------------------------------------------------------------------------------------------------------------------//
// UNIONS \\
//--------------------------------------------------------------------------------------------------------------------//

// Declaration
union MyUnion {
    int intValue;
    float floatValue;
    char stringValue[20];
};

// Initialization
union MyUnion u;
u.intValue = 42;

// Accessing Members
printf("Value: %d", u.intValue);

//--------------------------------------------------------------------------------------------------------------------//
// FILE HANDLING \\
//--------------------------------------------------------------------------------------------------------------------//

// File Pointer
FILE *filePointer;

// Opening a File
filePointer = fopen("example.txt", "w");

// Writing to a File
fprintf(filePointer, "Hello, World!");

// Closing a File
fclose(filePointer);

// Reading from a File
filePointer = fopen("example.txt", "r");
char buffer[100];
fgets(buffer, sizeof(buffer), filePointer);
fclose(filePointer);
printf("Content: %s", buffer);

//--------------------------------------------------------------------------------------------------------------------//
// DYNAMIC MEMORY ALLOCATION \\
//--------------------------------------------------------------------------------------------------------------------//

// malloc, calloc, realloc, free
int *dynamicArray = (int *)malloc(5 * sizeof(int));

// Check for successful allocation
if (dynamicArray != NULL) {
// code block
free(dynamicArray);  // deallocate memory when done
}

//--------------------------------------------------------------------------------------------------------------------//
// FUNCTION POINTERS \\
//--------------------------------------------------------------------------------------------------------------------//

// Declaration
int add(int a, int b);
int subtract(int a, int b);

// Function Pointer
int (*operation)(int, int);

// Assigning Function Address to Pointer
operation = add;

// Calling through Function Pointer
int result = operation(3, 5);

// Function Pointer as Function Parameter
int calculate(int (*func)(int, int), int a, int b) {
    return func(a, b);
}

//--------------------------------------------------------------------------------------------------------------------//
// ENUMERATIONS \\
//--------------------------------------------------------------------------------------------------------------------//

// Declaration
enum Days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

// Initialization and Usage
enum Days today = Wednesday;
if (today == Wednesday) {
// code block
}

//--------------------------------------------------------------------------------------------------------------------//
// BIT-FIELDS \\
//--------------------------------------------------------------------------------------------------------------------//

// Structure with Bit-Fields
struct Status {
    unsigned int active : 1;  // 1-bit field
    unsigned int priority : 3;  // 3-bit field
    unsigned int type : 2;  // 2-bit field
};

//--------------------------------------------------------------------------------------------------------------------//
// TYPEDEF \\
//--------------------------------------------------------------------------------------------------------------------//

// Creating Custom Data Types with typedef
typedef unsigned long int UserID;

// Usage
UserID myID = 12345;

//--------------------------------------------------------------------------------------------------------------------//
// MACROS \\
//--------------------------------------------------------------------------------------------------------------------//

// Simple Macro
#define SQUARE(x) (x * x)

// Usage
int result = SQUARE(5);

//--------------------------------------------------------------------------------------------------------------------//
// PREPROCESSOR DIRECTIVES \\
//--------------------------------------------------------------------------------------------------------------------//

// Conditional Compilation
#ifdef DEBUG
// Debugging code
#endif

// Include Guard
#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H

// Header file contents

#endif

//--------------------------------------------------------------------------------------------------------------------//
// ADVANCED MEMORY MANAGEMENT \\
//--------------------------------------------------------------------------------------------------------------------//

// Memory Allocation with calloc
int *array = (int *)calloc(5, sizeof(int));

// Memory Reallocation with realloc
array = (int *)realloc(array, 10 * sizeof(int));

//--------------------------------------------------------------------------------------------------------------------//
// MULTITHREADING (POSIX THREADS) \\
//--------------------------------------------------------------------------------------------------------------------//

#include <pthread.h>

// Function to be executed by a thread
void *myThreadFunction(void *arg) {
    // Thread code
    return NULL;
}

// Creating a Thread
pthread_t myThread;
pthread_create(&myThread, NULL, myThreadFunction, NULL);

// Joining Threads
pthread_join(myThread, NULL);

//--------------------------------------------------------------------------------------------------------------------//
// NETWORKING (SOCKET PROGRAMMING) \\
//--------------------------------------------------------------------------------------------------------------------//

#include <sys/socket.h>
#include <netinet/in.h>

// Creating a Socket
int serverSocket = socket(AF_INET, SOCK_STREAM, 0);

// Binding the Socket
struct sockaddr_in serverAddress;
serverAddress.sin_family = AF_INET;
serverAddress.sin_port = htons(8080);
serverAddress.sin_addr.s_addr = INADDR_ANY;
bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress));

// Listening for Connections
listen(serverSocket, 5);

// Accepting Connections
int clientSocket = accept(serverSocket, NULL, NULL);

//--------------------------------------------------------------------------------------------------------------------//
// ERROR HANDLING \\
//--------------------------------------------------------------------------------------------------------------------//

#include <errno.h>
#include <string.h>

// Checking for Errors
if (someFunction() == -1) {
perror("Error in someFunction");
fprintf(stderr, "Error: %s\n", strerror(errno));
}

//--------------------------------------------------------------------------------------------------------------------//
// STANDARD TEMPLATE LIBRARY (STL) \\
//--------------------------------------------------------------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>

// Using Dynamic Arrays (Vector)
#include <vector>
std::vector<int> dynamicArray;
dynamicArray.push_back(10);
int element = dynamicArray[0];

// Using Strings
#include <string>
std::string myString = "Hello, World!";

// Using Queues
#include <queue>
std::queue<int> myQueue;
myQueue.push(42);
int frontElement = myQueue.front();

//--------------------------------------------------------------------------------------------------------------------//
// FUNCTIONAL PROGRAMMING \\
//--------------------------------------------------------------------------------------------------------------------//

// Function Pointers and Callbacks
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int calculate(int (*operation)(int, int), int a, int b) {
    return operation(a, b);
}

int main() {
    int result = calculate(add, 10, 5);
    printf("Result: %d\n", result);
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------//
// FILE I/O (TEXT AND BINARY) \\
//--------------------------------------------------------------------------------------------------------------------//

#include <stdio.h>

// Text File I/O
FILE *textFile = fopen("example.txt", "w");
fprintf(textFile, "Hello, World!");
fclose(textFile);

textFile = fopen("example.txt", "r");
char buffer[100];
fgets(buffer, sizeof(buffer), textFile);
fclose(textFile);
printf("Content: %s", buffer);

// Binary File I/O
struct Person {
    char name[50];
    int age;
};

FILE *binaryFile = fopen("people.dat", "wb");
struct Person person = {"John Doe", 25};
fwrite(&person, sizeof(struct Person), 1, binaryFile);
fclose(binaryFile);

binaryFile = fopen("people.dat", "rb");
struct Person readPerson;
fread(&readPerson, sizeof(struct Person), 1, binaryFile);
fclose(binaryFile);
printf("Name: %s, Age: %d", readPerson.name, readPerson.age);

//--------------------------------------------------------------------------------------------------------------------//
// ADVANCED DATA STRUCTURES \\
//--------------------------------------------------------------------------------------------------------------------//

// Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node at the beginning of the list
struct Node *insertAtBeginning(struct Node *head, int newData) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    return newNode;
}

// Tree Data Structure (Binary Tree)
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Graph Data Structure (Adjacency List)
struct GraphNode {
    int data;
    struct GraphNode *next;
};

struct Graph {
    int numVertices;
    struct GraphNode **adjList;
};

//--------------------------------------------------------------------------------------------------------------------//
// FUNCTIONALITIES OF C99 AND C11 \\
//--------------------------------------------------------------------------------------------------------------------//

// Variable-Length Arrays (VLA) - C99
int dynamicArray(int n) {
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }
    return arr[3];
}

// Inline Functions - C99
inline int square(int x) {
    return x * x;
}

// _Generic Keyword - C11
#define printType(x) _Generic((x), int: "Integer", float: "Float", double: "Double", default: "Unknown")

//--------------------------------------------------------------------------------------------------------------------//
// ADVANCED POINTER USAGE \\
//--------------------------------------------------------------------------------------------------------------------//

// Pointers to Functions
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int performOperation(int (*operation)(int, int), int a, int b) {
    return operation(a, b);
}

int main() {
    int result = performOperation(add, 10, 5);
    printf("Result: %d\n", result);
    return 0;
}

// Function Pointers in Structures
struct MathOperations {
    int (*add)(int, int);
    int (*subtract)(int, int);
};

int main() {
    struct MathOperations mathOps;
    mathOps.add = add;
    mathOps.subtract = subtract;

    int result = mathOps.add(10, 5);
    printf("Addition Result: %d\n", result);

    result = mathOps.subtract(10, 5);
    printf("Subtraction Result: %d\n", result);

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------//
// ADVANCED MACRO USAGE \\
//--------------------------------------------------------------------------------------------------------------------//

// Stringification
#define STRINGIFY(x) #x
printf("%s\n", STRINGIFY(Hello));

// Concatenation
#define CONCATENATE(a, b) a ## b
int ab = CONCATENATE(10, 20);

// Variadic Macros
#define DEBUG_PRINT(...) printf(__VA_ARGS__)
DEBUG_PRINT("Value: %d\n", 42);

//--------------------------------------------------------------------------------------------------------------------//
// C STANDARD LIBRARY EXTENSIONS (C11) \\
//--------------------------------------------------------------------------------------------------------------------//

// _Static_assert
_Static_assert(sizeof(int) == 4, "int must be 4 bytes");

// _Alignas and _Alignof
struct alignas(16) AlignedStruct {
int x;
double y;
};
printf("Alignment: %zu\n", alignof(AlignedStruct));

// _Noreturn
_Noreturn void die() {
    printf("Exiting...\n");
    exit(1);
}

