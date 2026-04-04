# Car Price Configurator

## Description

A C++ console application that calculates the final price of a car based on its base price, selected optional features, and payment method.

The program asks whether the vehicle includes specific optionals such as electric windows, air conditioning, metallic paint, and power steering. If the customer chooses cash payment, a 5% discount is applied to the final price.

---

## Features

* Validates base price input to prevent invalid values
* Supports optional vehicle features using `Y/N` prompts
* Adds the cost of each selected optional to the final price
* Applies a 5% discount for cash payment
* Formats currency values with 2 decimal places using `<iomanip>`
* Uses ANSI colors to improve terminal readability
* Supports repeated calculations with a `do-while` loop

---

## Concepts Practiced

* Input and output (`cin`, `cout`)
* Arithmetic operations
* Conditional logic with `if`
* Input validation with `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* Incremental accumulation using `+=`
* Percentage discount calculation
* Output formatting with `<iomanip>` (`fixed`, `setprecision`)
* Basic UI/UX improvements with ANSI terminal colors

---

## How It Works

The program starts with the base price of the car:

```text
final_price = base_price
```

Then it adds the price of each selected optional:

* Electric windows → `$500.00`
* Air conditioning → `$2000.00`
* Central lock & alarm → `$500.00`
* Metallic paint → `$1000.00`
* Power steering → `$2500.00`

If the customer chooses cash payment, the final price is reduced by 5%.

---

## How to Run

1. Compile the program:

   ```bash
   g++ car_price_configurator.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Base price: `$50000.00`
* Electric windows: `Y`
* Air conditioning: `Y`
* Central lock & alarm: `N`
* Metallic paint: `Y`
* Power steering: `N`
* Cash payment: `Y`

**Output:**

* Final price: `$50730.00`

---

## Notes

* The base price must be greater than zero
* Optional features are selected with `Y/N` input
* The 5% discount is applied only for cash payment
* ANSI colors may not display correctly in all terminals

---

## Author

Gabriel Carretts
