# Assignment 4: Binary ↔ Decimal Converter

Write a C++ program that allows the user to convert numbers between **binary and decimal**.

When the program starts, display the following menu:

```text
1. Convert binary to decimal
2. Convert decimal to binary
3. Exit
```

The program should continue displaying the menu until the user chooses **3**.

## Requirements

### Option 1: Binary → Decimal

Ask the user to enter a binary number, such as:

```text
1101
```

Before converting the number, **check that it is a valid binary number**.

A valid binary number contains only the digits `0` and `1`.

For example:

```text
1101   → valid
10101  → valid
1201   → invalid
102    → invalid
```

If the number is not valid, display an appropriate error message and return to the menu.

If the number is valid, convert it to its decimal equivalent using **arithmetic operations and a loop**.

For example:

```text
1101 → 13
```

### Option 2: Decimal → Binary

Ask the user to enter a decimal number.

Convert it to binary using **arithmetic operations and a loop**.

For example:

```text
13 → 1101
```

### Option 3: Exit

End the program.

## Example Run

```text
1. Convert binary to decimal
2. Convert decimal to binary
3. Exit

Enter your choice: 1

Enter a binary number: 1101
Decimal: 13

1. Convert binary to decimal
2. Convert decimal to binary
3. Exit

Enter your choice: 1

Enter a binary number: 1201
Error: 1201 is not a valid binary number.

1. Convert binary to decimal
2. Convert decimal to binary
3. Exit

Enter your choice: 2

Enter a binary number: 13
Binary: 1101

1. Convert binary to decimal
2. Convert decimal to binary
3. Exit

Enter your choice: 3

Goodbye!
```

### Hints

To check whether a number contains only `0` and `1`, repeatedly examine its **rightmost digit**.

For example, given:

```text
1201
```

you can use:

```cpp
number % 10
```

to obtain the rightmost digit.

Then use:

```cpp
number /= 10;
```

to remove that digit.

Repeat until there are no digits left.

Can you use this same process to both **validate** and **convert** the binary number?