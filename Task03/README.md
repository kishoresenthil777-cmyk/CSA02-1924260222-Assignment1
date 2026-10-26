# Task 03 – Define the Constants

## Objective
To define electricity tariff values and limits as constants so that tariff revisions can be made in one place.

## 1. Types of Constants

- **#define:** Creates a macro constant before compilation.
- **const:** Defines a variable whose value cannot be modified through that variable.
- **enum:** Defines named integer constants.

## 2. Difference Between #define and const

- `#define` performs text substitution and does not provide normal variable type checking.
- `const` has a data type and follows normal scope rules.
- `const` variables can be easier to inspect while debugging.

## 3. Naming Conventions

Constants are usually written in uppercase letters with underscores between words.

Examples:
- `SLAB1_UNITS`
- `RATE2_PAISE`
- `RATE3_PAISE`
- `FIXED_CHARGE_PAISE`

## Conclusion
Defining tariff values as constants makes the billing program easier to maintain. When the tariff changes, the values can be updated in one place.
