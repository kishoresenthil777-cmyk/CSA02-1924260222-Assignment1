# Task 01 – Problem Analysis

## Rural Electricity Billing System

**Register Number:** 1924260222

### 1. Objective
To analyse the requirements of the rural electricity billing system and identify its inputs, processing steps, and outputs.

### 2. Inputs
- Previous meter reading
- Current meter reading
- Number of electricity units consumed
- Applicable tariff rates
- Fixed charge

### 3. Processing
1. Read the previous and current meter readings.
2. Calculate electricity consumption.
3. Handle meter rollover when the reading exceeds the maximum register value.
4. Apply the electricity tariff:
   - First 100 units: Free
   - Next 100 units: ₹2.25 per unit
   - Above 200 units: ₹4.50 per unit
5. Add the fixed charge of ₹50.
6. Calculate the final electricity bill.

### 4. Outputs
- Electricity units consumed
- Energy charge
- Fixed charge
- Total electricity bill

### 5. Validation
The system must handle valid meter readings, zero consumption, invalid inputs, and meter rollover correctly.

### 6. Conclusion
This analysis identifies the essential inputs, processing requirements, outputs, and validation rules needed to develop a reliable rural electricity billing system.
