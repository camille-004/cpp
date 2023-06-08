# Input/Output
`iostream`: Input/output **stream**.
- `#include <iostream>`

# C++ Output
`std::cout`: Character **out**put, `<<` is *insertion operator*.
- `std::cout << "Hello World!";`

We can use multiple insertion opertaors on the same line.
- `std::cout << "The year is " << 2023 << ".";`

Include a newline `\n` at the end to print the next output on a new line, or use `endl`.
- `std::cout << "Hello World!" << std::endl;`

# Data Types
## `int`
Stores whole numbers without decimals
- Requires up to 4 bytes of memory space.
- Ranges from $-2^{31}$ to $2^{31}$.

## `double`
Floating-point numbers with decimals.
- Requires 8 bytes of memory space.
- Can store up to 15 decimal digits.

### Type Conversion
Type casting: Notation `(type) value` means "convert `value` to `type`".
```cpp
double a = 3.5;
int b = (int) a;        // b is now 3, truncates the decimal, no rounding.

int c = 5;
double d = (double) c;  // d is now 5.0.
```

## `char`
- Stores single character surrounded by `''` single quotes.
- One byte of memory space.
- `char first_letter = 'a';`

## `string`
- `std::string` stores a sequence of characters surrounded by `""` double quotes.
    - `std::string` is not built-in, must include the `<string>` library.

### String Methods
- *Concatenate* srtings together with `+`
- Access a character at the specified position with `[]`.
- `length()` to get the length of a string.

```cpp
std::string_message = "Hello World!";
int message_length = message.length();  // 11
```
## `bool`
- Stores `true` or `false`.
- Requires one byte of memory space.

# Operators

## Pre vs. Post-Increment
- `++x`: Increment `x`, then return `x`
- `x++`: Copy `x`, then increment `x`, then return the copy

```cpp
int x = 10;

// x is decremented to 9 first, then assigned to y
int y = --x;

std::cout << x << ' ' << y;
```

This outputs `9 9`.

Postfix operators require more steps than prefix operators.
- They have higher precedence than prefix operators.
- https://en.cppreference.com/w/cpp/language/operator_precedence

```cpp
int x = 10;

// Make a copy of x first, then decrement to 9.
// Finally, assign the value of the copy (10) to y.
int y = x--;

std::cout << x << ' ' << y;
```

This outputs `9 10`.

## Bitwise Operators

Manipulate variables at the bit level.
- `x << y`: Shift bits in `x` left by `y`.
- `x >> y`: Shift bits in `x` right by `y`.
- `~x`: Flip all bits in `x`.
- `x & y`: Each bit in `x` AND each bit in `y`.
- `x | y`: Each bit in `x` OR each bit in `y`.
- `x ^ y`: Each bit in `x` XOR each bit in `y`.

Example:

```cpp
int x = 3;  // In bits: 0011
int y = 9;  // In bits: 1001

int z = x << 2;  // z = 12, in bits: 1100
z = y >> 1;  // z = 4, in bits: 0100
z = x | y;  // z = 11, in bits: 1011
```

# References and Pointers

Two powerful features that allow us to directly manipulate memory: references and pointers.
- Use case: dynamic memory allocation and advanced data structures such as linked lists and trees.

## Reference
- *Reference variable*: Alias to an existing variable, declared by using an ampersand `&` between the reference type and variable name:

```cpp
// When the value of score is changed, the value of exam_grade will also change in the same way.
int exam_grade = 85;
int& score = exam_grad;
```

- **References must be initialized.** There is no such thing as an empty reference.
- **References cannot be reassigned**. Reassigning an existing reference variable will produce unexpected results.

```cpp
double& volume;  // Compiler error, reference not initialized.

int x = 1, y = 2;
int& num = x;
num = y;  // Reassigning references -> undesired behavior.
```

- Primary application: function parameters.

### Memory Address

- When not used in declaration, the `&` is called the *address of* operator and is used to access the memory address of a variable.

```cpp
std::string message = "Hello World!";

// Print the value of message.
std::cout << message << std:endl;

// Print the memory adddress of message (0x7ffee9b21af0).
std::cout << &message << std:endl;
```

## Pointers

- A *pointer* stores a **memory address** as its value.
- Declared with an asterisk `*` between the data type and the variable name.
- Must point to a data type of the same type.
    - `int*` means "pointer to an `int` variable".
- Empty when they are declared and need to be initialized.
- Usually assigned with a memory address obtained by the *address of* operator `&`.

```cpp
std::string day = "Monday";

// Pointer variable to point to day.
std::string* ptr = &day;

*ptr = "Friday";

// Print: Friday
std::cout << *prt << std::endl;

// Print: Friday
std::cout << day << std:endl;
```

### Dereference

- Asterisk `*` is called the *derefernce* operator and is used to obtained the value pointed to by a pointer variable

```cpp
// Reference: Print the memory address of day.
std::cout << ptr << std:endl; 

// Dereference: Print the value of day (Friday).
std::cout << *ptr << std::endl;
```

### Null Pointer
- If you are unsure where to point, assign that variable to `nullptr`, which is a keyword that provides a typesafe pointer value representing an empty pointer.
    - `int* ptr = nullptr;`