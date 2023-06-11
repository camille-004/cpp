# Conditional Statements

## Shorthand `if-else`

Syntax:
```cpp
varible = (condition) ? condition_is_true : condition_is_false;
```

Long way:
```cpp
int time = 10;
std::string greeting;
if (time < 12) {
    greeting = "Good morning";
}
else {
    greeting = "Good afternoon";
}
```

Short way:
```cpp
int time = 10;
std::string greeting = (time < 12) ? "Good morning" : "Good afternoon";
```

# Loops

## `while` Loops

Pretty standard:

```cpp
int count = 1;
while (count <= 5) {
    std::cout << count;
    count++;
}
```

Outputs: `12345` (because we don't append `\n` or use `std::endl`)

## `do-while` Loops

Similar to `while` loops, but will always execute *at least* once, even if the initial condition is `false`.

```cpp
int price = 300;
do {
    std::cout << "Too expensive!";
} while (price > 500);
```

`price > 500` is `false`, but the program above will still print `Too expensive!` once.

## `for` Loop

```cpp
for (int i = 1; i <= 5; i++) {
    std::cout << i;
}
```

## `for-each` Loops

Useful for iterating through list-like structures such as arrays or `std::vector`.

```cpp
int fibonacci[5] = {0, 1, 1, 2, 3};
for (int number : fibonacci) {
    std::cout << number;
}
```

## The `auto` Keyword

`auto` lets C++ deduce the type of vvariable based on the type of the list it belongs to.

```cpp
int fibonacci[5] = {0, 1, 1, 2, 3};
for (auto number : fibonacci) {
    std::cout << number;
}
```