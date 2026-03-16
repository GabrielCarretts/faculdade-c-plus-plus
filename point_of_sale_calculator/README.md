# POS Cash Register System 🛒

## Description
A C++ terminal-based Point of Sale (POS) application designed to process retail transactions. The system allows cashiers to input multiple items, automatically calculates precise percentage-based discounts, and generates a formatted receipt with a running grand total. 

## Technologies Used
* **C++** (Core Logic)
* **`<iostream>`** (Standard Input/Output stream)
* **`<string>`** (Advanced text memory management)
* **`<clocale>`** (Regional encoding for Portuguese characters)
* **ANSI Escape Codes** (Terminal UI coloring)

## Core Logic & Features
* **Double-Bouncer Input Buffer:** Implements advanced `getline()` and `cin.ignore()` architecture to successfully capture multi-word product names (like "mechanical keyboard") without crashing the C++ input stream.
* **The Accumulator Pattern:** Utilizes a highly secure `grand_total` memory architecture that accurately processes financial math and resets flawlessly for every new customer.
* **Scalable Loop Architecture:** Built using a controlled `for` loop to process a specific batch of items, nested inside a persistent `do-while` loop that keeps the cash register open for infinite customers.

## How to Run
1. Clone this repository to your local machine.
2. Navigate to the project directory in your terminal.
3. Compile the source code using the g++ compiler: 
   `g++ point_of_sale.cpp -o app.exe`
4. Run the executable: 
   `.\app.exe`