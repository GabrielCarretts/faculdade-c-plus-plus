# Fishing Fine Calculator
## Description
A C++ console application that calculates fishing fines based on total catch weight.
The program reads the fisherman's name and catch weight, checks if the legal limit of 50kg has been exceeded, and if so, calculates the applicable fine based on the excess weight.

---
## Features
* Reads fisherman's name using `getline()`
* Validates catch weight to prevent invalid input
* Detects excess weight using `if / else` logic
* Calculates excess weight and applicable fine
* Displays a formatted and color-coded summary report
* Uses `<iomanip>` to format monetary values with 2 decimal places
* Supports repeated calculations with a `do-while` loop

---
## Concepts Practiced
* Input and output (`cin`, `cout`, `getline`)
* Conditional logic with `if` and `else`
* Arithmetic calculations
* Input validation with `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* Loop control with `do-while`
* Output formatting using `<iomanip>` (`fixed`, `setprecision`)
* Basic UI/UX improvements with ANSI colors

---
## How It Works
The program enforces a **50kg legal catch limit**.
If the limit is exceeded:
* Excess weight is calculated
* A fine of **$4.00 per kg** over the limit is applied

The program calculates:
```text
excess_weight = fishing_weight - 50
fine = excess_weight * 4.00
```

---
## How to Run
1. Compile the program:
   ```bash
   g++ fishing_fine_calculator.cpp -o app
   ```
2. Run the executable:
   ```bash
   ./app
   ```

---
## Example
**Input:**
* Fisherman's name: John Silva
* Total catch weight: 65 kg

**Output:**
* Fisherman's name: John Silva
* Catch weight: 65.00 kg
* Violation: Catch exceeds the legal limit.
* Excess weight: 15.00 kg
* Applicable fine: $ 60.00

---
## Notes
* Catch weight must be a non-negative number
* The legal catch limit is fixed at 50kg
* ANSI colors may not display correctly in all terminals
* Currency is displayed using `$` for consistency with the English interface

---
## Author
Gabriel Carretts
