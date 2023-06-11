# Parameters

## Default Parameters

```cpp
void message(std::string language = "C++") {
    std::cout << "I like to code with " << language << std::endl;
}

int main() {
    message();  // Without an argument.
    message("Java");  // With an argument.
}
```

## Pass by Reference

- Allows a function to modify the value of its argument variables.
- Indicated by a reference operator &.

```cpp
void swap(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

int main() {
    int first = 10;
    int second = 20;

    // Outputs 10 20
    std::cout << "Before swap: " << first << " " << second << std::endl;

    swap(first, second);

    // Outputs 20 10
    std::cout << "After swap: " << first << " " << second << std::endl;
}
```