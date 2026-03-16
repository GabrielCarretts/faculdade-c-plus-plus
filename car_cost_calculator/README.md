# Car Cost Calculator

## Description
A C++ terminal application designed to calculate the final consumer price of a vehicle. The program takes a base factory cost and automatically applies standard industry calculations, including a 10% distributor markup and a 45% government tax, to output the exact final price.

## Technologies Used
* **C++** (Core Logic)
* **`<iostream>`** (Standard Input/Output stream)
* **`<clocale>`** (Regional encoding for Portuguese characters)
* **ANSI Escape Codes** (Terminal UI coloring)

## Core Logic & Features
* **Input Validation:** Implements a strict `while` loop "security guard" that prevents the system from accepting negative numbers, ensuring mathematical accuracy.
* **Continuous Execution:** Utilizes a nested `do-while` loop architecture, allowing the user to calculate multiple vehicles in a single session without having to restart the application.
* **Memory Management:** Engineered using `float` variables to handle precise financial data and decimal percentages without data truncation.
* **Terminal UI:** Features a color-coded interface (green for success/values, red for errors, yellow for prompts) to vastly improve the user experience compared to a standard black-and-white console.

## How to Run
1. Clone this repository to your local machine.
2. Navigate to the project directory in your terminal.
3. Compile the source code using the g++ compiler: 
   `g++ car_cost_calculator.cpp -o app.exe`
4. Run the executable: 
   `.\app.exe`
