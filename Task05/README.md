# Task 05 – Header Files and Conditional Compilation

## Objective
To understand header files and conditional compilation in C.

## 1. Header Files

Header files provide declarations for library functions.

- `stdio.h` – Used for input and output functions such as `printf()` and `scanf()`.
- `limits.h` – Provides integer limits such as `INT_MAX`.
- `float.h` – Provides limits and precision information for floating-point types.

## 2. Conditional Compilation

Conditional compilation allows selected parts of a program to be included or excluded during preprocessing.

Example:

```c
#ifdef DEBUG
printf("Debug mode enabled\n");
#endif
```

When the `DEBUG` macro is defined, the debug message is included in the compiled program.

## 3. Advantages

- Improves code organisation.
- Provides access to library declarations.
- Allows optional debugging information.
- Helps maintain programs more easily.

## Conclusion
Header files and conditional compilation help make C programs organised, maintainable and easier to debug.
