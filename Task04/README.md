# Task 04 – Use Macros Safely

## Objective
To use C macros for repeated calculations and understand their advantages and limitations.

## 1. Macro Expansion
A macro is processed by the preprocessor before compilation. The `gcc -E` command displays the preprocessed source code.

## 2. SQUARE Macro

Incorrect macro:
```c
#define SQUARE(x) x*x
```

For `SQUARE(a+1)`, expansion gives `a+1*a+1`, which can produce an incorrect result.

Correct macro:
```c
#define SQUARE(x) ((x)*(x))
```

Parentheses ensure the expression is evaluated with the intended grouping.

## 3. MAX Macro
```c
#define MAX(a,b) ((a)>(b)?(a):(b))
```

This macro may evaluate an argument more than once. For example, using `MAX(i++, j)` can cause unexpected side effects.

## 4. When to Use Functions
Functions are safer for calculations involving side effects because their arguments are evaluated before the function executes. They also provide normal type checking.

## Conclusion
Macros reduce repeated code, but parentheses and careful argument use are essential to avoid errors.
