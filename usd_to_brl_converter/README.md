# USD to BRL Converter

## Description

A simple C++ console application that converts an amount in US dollars (USD) to Brazilian reais (BRL) using a user-provided exchange rate.

The program also validates user input and allows multiple conversions in the same execution.

---

## Features

* Converts USD to BRL using a custom exchange rate
* Validates numeric input to prevent zero or negative values
* Validates the repeat option (`Y/N`)
* Allows multiple conversions with a `do-while` loop
* Uses ANSI colors to improve terminal readability

---

## Concepts Practiced

* Variables and data types (`double`, `char`, `string`)
* Input and output (`cin`, `cout`)
* Arithmetic operations
* Input validation with `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* `do-while` loops for repeated execution
* Constants for terminal colors

---

## Technologies Used

* C++
* `<iostream>` for input and output
* ANSI escape codes for terminal colors

---

## How to Run

1. Compile the program:

   ```bash
   g++ usd_to_brl_converter.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Notes

* This project converts values from USD to BRL only
* The exchange rate is entered manually by the user
* ANSI color codes may not work the same way on every terminal

---

## Author

Gabriel Carretts
