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

// Conditionals
