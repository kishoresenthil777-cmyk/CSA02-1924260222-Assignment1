# Task 12: Re-evaluate and Adapt the Design

## A. Impact Analysis

The co-operative is changing from ordinary monthly meter readings to smart meters that report electricity consumption in watt-hours every 15 minutes. Each house produces 35,040 readings per year.

The new system also introduces a peak-hour tariff from 6 PM to 10 PM, during which electricity costs 20% more.

Changes required:
- Use wider integer types, such as `long long`, for large accumulated readings and totals.
- Store tariff values in a configuration file instead of relying only on fixed `#define` constants.
- Record the time associated with each reading to identify peak-hour consumption.

## B. Evaluation of the Original Design

The original design uses integer paise for money and a 16-bit meter register for ordinary meter readings.

Integer paise remains suitable for accurate monetary calculations. However, a 16-bit meter type is not sufficient for yearly accumulated consumption.

Readings per house per year:

35,040 readings

For 800,000 houses:

35,040 × 800,000 = 28,032,000,000 readings per year.

This large volume requires careful selection of data types and efficient processing.

## C. Adaptation and Redesign

The revised design will:
1. Use `long long` for large accumulated values.
2. Read tariff rates from a configuration file at startup.
3. Apply a 20% surcharge to electricity consumed between 6 PM and 10 PM.
4. Store monetary amounts as integer paise.
5. Validate readings and tariff values.
6. Test normal hours, peak hours, invalid inputs, and large totals.

## D. Evidence-Based Defence

The redesigned system is more suitable for smart meters because it supports larger totals, configurable tariffs, and time-based pricing.

A configuration file avoids recompilation whenever tariff values change. Wider integer types reduce the risk of overflow, while integer paise avoids floating-point rounding errors in monetary calculations.

The program must be tested with sample readings and peak-hour cases before deployment. Actual test outputs should be recorded to support the final design decision.

## Conclusion

The original design should be modified rather than retained unchanged. The revised design uses wider integer types, configurable tariffs, peak-hour calculations, and systematic testing to support the co-operative's future requirements.
