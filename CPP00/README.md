# C++ Module 00: Namespaces, Classes, Member Functions, and Basic Concepts

## Overview
This module introduces the foundational concepts of C++ programming, including namespaces, classes, member functions, initialization lists, and basic keywords like `static` and `const`. Through practical exercises, it aims to build a solid understanding of object-oriented programming and C++ syntax.

## Objectives
- Understand and implement namespaces, classes, and member functions.
- Familiarize with standard input/output streams.
- Learn to use `static` and `const` keywords.
- Practice initialization lists and memory management basics.

---

## Exercises

### Exercise 00: Megaphone
- **Status:** ✅ Done
- **Description:** Write a program that converts input text to uppercase, simulating a "megaphone."
- **Requirements:** Implement in C++ with command-line arguments.
- **Instructions:** The program should handle multiple inputs and print uppercase text to the console.
- **Implementation Notes:** Use `Makefile` and name your main file `megaphone.cpp`.

---

### Exercise 01: My Awesome PhoneBook
- **Status:** ✅ Done
- **Description:** Create a basic phonebook program with a fixed limit of 8 contacts.
- **Requirements:** The program should allow users to add, search, and exit the phonebook.
- **Instructions:** Implement two classes, `PhoneBook` and `Contact`, and handle commands (ADD, SEARCH, EXIT).
- **Implementation Notes:** Dynamic memory allocation is not allowed; use static structures.

---

### Exercise 02: The Job of Your Dreams
- **Status:** ✅ Done
- **Description:** Rebuild a missing file (`Account.cpp`) from a set of existing tests and header files.
- **Requirements:** Implement an `Account` class based on the provided specifications.
- **Instructions:** Use the header file `Account.hpp` and log files to replicate functionality.
- **Implementation Notes:** Ensure the output matches the provided test logs.

---

## Notes

**Key Learnings from CPP00 Exercises:**

* **Namespace `std`:** Most C++ code resides within the `std` namespace, avoiding naming conflicts.  We use it to access standard library functions and objects, such as `std::cout` for output.
* **Input/Output Streams:** `std::cout` is used for printing to the console, while `std::cin` is used for reading input.
* **Strings and Character Arrays:** `std::string` is a class for working with text, higher/level way of representing strings like char[] in C.
* **Classes and Objects:** Classes define blueprints for objects, which combine data and functions (methods).
* **Header Guards:** Prevent multiple inclusion of the same header file (`#ifndef`, `#define`, `#endif`).
* **Getline and Input Handling:** Using `std::getline` to read entire lines of input.  We might need to handle the case where the user presses Ctrl+D (EOF), which could cause issues if not handled gracefully.

**Libraries:**

* `<iostream>`:  Provides input/output functionality (e.g., `cout`, `cin`).
* `<cstring>`: Functions for manipulating C-style strings (`char[]`).
* `<string>`: Provides the `std::string` class for working with strings.
* `<iomanip>`: Provides tools for manipulating output format. Used with `setw` for setting the field width when displaying contact information.
* `<limits>`: Provides definitions for numeric limits, used for input validation (e.g., clearing the input buffer).
* `<cctype>`: This header file declares a set of functions to classify and transform individual characters. Used to check if the contact number has any alphabet letter.


**Example: Handling Ctrl+D with Getline**


---

## Additional Resources
- [C++ String Reference](http://www.cplusplus.com/reference/string/string/)
- [C++ I/O Manipulation](http://www.cplusplus.com/reference/iomanip/)

## License
This work is published under the terms of **[42 Unlicense](../LICENSE)**.
