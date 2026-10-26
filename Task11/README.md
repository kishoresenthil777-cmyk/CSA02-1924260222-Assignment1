# Task 11: Recommend and Defend the Final Design

## 1. Recommended Data Types
- `unsigned short` for the 16-bit meter reading.
- `int` for ordinary unit consumption.
- `long long` for large accumulated totals.
- Integer paise for monetary calculations to avoid floating-point rounding errors.
- `char` arrays for household identifiers when text storage is required.

## 2. Tariff Revision
Define tariff values centrally using named constants. Changing a tariff in one place avoids inconsistent values throughout the program. For frequent tariff changes, read the values from a configuration file at program startup.

## 3. Limitations
The program must validate input, handle meter rollover, prevent overflow, and check configuration values. The selected data types must be verified on the target system.

## 4. District-Scale Reliability
The program should be tested with up to 800,000 households. Use sufficiently wide integer types for accumulated bills and verify the results against expected totals.

## 5. Alternative Design: Configuration File
A configuration file allows tariff changes without recompiling the program. Reading `t` tariff values takes O(t) time and O(t) storage. Although startup requires additional processing, configuration files simplify tariff maintenance.

## Conclusion
The recommended design uses integer paise, appropriate data types, centralized tariff values, input validation, and systematic testing. Final approval should be based on actual program execution and measured test results.
