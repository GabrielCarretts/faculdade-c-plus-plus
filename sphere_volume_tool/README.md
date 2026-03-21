# Sphere Volume Tool

## Description

A C++ console application that calculates the volume of a sphere based on a given radius.

The program reads the radius, applies the mathematical formula for the volume of a sphere, and displays the result with proper formatting and units.

---

## Features

* Validates radius input (must be greater than zero)
* Calculates sphere volume using the formula ( V = (4 * π * r³) / 3 )
* Displays both radius and volume in a clean report format
* Formats output with 2 decimal places using `<iomanip>`
* Uses ANSI colors for improved terminal readability
* Supports repeated calculations with a `do-while` loop

---

## Concepts Practiced

* Arithmetic operations and mathematical formulas
* Use of constants (`pi`)
* Input validation with `while` loops
* Loop control using `do-while`
* Output formatting (`fixed`, `setprecision`)
* Basic UI/UX design with ANSI escape codes

---

## How to Run

1. Compile the program:

   ```bash
   g++ sphere_volume_tool.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Radius: 5

**Output:**

* Radius: 5.00 units
* Volume: 523.60 cubic units

---

## Notes

* Radius must be greater than zero
* Uses an approximate value of π (3.14159)
* ANSI colors may not display correctly on all terminals

---

## Author

Gabriel Carretts
