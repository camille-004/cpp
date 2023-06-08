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

