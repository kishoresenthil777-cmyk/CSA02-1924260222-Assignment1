# Task 06 – Read and Print Data Correctly

## Objective
To use `scanf()` and `printf()` correctly in the electricity billing program.

## 1. Format Specifiers

| Data type | Format specifier |
|---|---|
| `int` | `%d` |
| `unsigned int` | `%u` |
| `long` | `%ld` |
| `long long` | `%lld` |
| `float` in `printf()` | `%f` |
| `double` in `printf()` | `%f` |
| `double` in `scanf()` | `%lf` |
| `char` | `%c` |
| String | `%s` |

## 2. Input Validation

The return value of `scanf()` indicates how many input items were successfully read.

Example:
```c
int units;

printf("Enter units consumed: ");

if (scanf("%d", &units) != 1) {
    printf("Invalid input!\n");
    return 1;
}
```

## 3. Printing Rupees and Paise

When the bill is stored as integer paise, it can be displayed as rupees and paise.

Example:
```c
long paise = 16250;

printf("Bill: Rs %ld.%02ld\n", paise / 100, paise % 100);
```

Output:
```text
Bill: Rs 162.50
```

## 4. Why Correct Format Specifiers Matter

Using an incorrect format specifier can cause incorrect results or undefined behaviour. The format specifier must match the data type.

## 5. Alternative Using fgets()

`fgets()` reads a line into a character buffer. The input can then be converted using `strtol()` or `sscanf()`.

This approach provides better control over invalid input and allows the program to handle input errors more carefully.

## Conclusion
Correct format specifiers, input validation and proper currency formatting help make the billing program reliable.
