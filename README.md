# Relations Checker in C++

This project implements a C++ program to handle various operations on relations between two sets, including reflexivity, symmetry, and anti-symmetry checks. The program is interactive and menu-driven, making it user-friendly.

## Features
- Input two sets and generate their Cartesian product.
- Check properties of relations, including:
  - Reflexivity
  - Symmetry
  - Anti-symmetry
  - Combination of reflexive and symmetric relations.
- Display relation properties as a matrix.
- Calculate the total number of possible relations.

## Requirements
- C++ compiler (GCC/Clang/MSVC)
- Console to run the program
- Visual Studio 

## How to Compile
Use the following command to compile the program:
```bash
 g++ -o relations_checker main.cpp
```

## How to Run
Run the compiled program using:
```bash
./relations_checker
```

## Usage
1. Enter the number of elements for Set A and Set B (minimum 3 elements).
2. Input the elements of both sets.
3. Use the menu options to explore different properties of the relations.

## Menu Options
### Main Menu:
- **1:** Check the number of relations.
- **2:** Check if specific relations exist.
- **3:** Exit the program.

### Submenu for Relations:
- **1:** Total number of relations.
- **2:** Reflexive relations.
- **3:** Symmetric relations.
- **4:** Anti-symmetric relations.
- **5:** Reflexive and symmetric relations.
- **6:** Symmetric and anti-symmetric relations.
- **7:** Return to the main menu.

### Submenu for Relation Existence:
- **1:** Check symmetry.
- **2:** Check reflexivity.
- **3:** Check anti-symmetry.
- **4:** Check both symmetry and anti-symmetry.
- **5:** Check both reflexivity and symmetry.
- **6:** Return to the main menu.

## Sample Output
```
ENTER NUMBER OF ELEMENTS IN SET A AND B       : 3
Enter Elements in Set A:
ENTER 1TH ELEMENT : 1
ENTER 2TH ELEMENT : 2
ENTER 3TH ELEMENT : 3

ENTER ELEMENTS OF SET B:
ENTER 1TH ELEMENT : 4
ENTER 2TH ELEMENT : 5
ENTER 3TH ELEMENT : 6

---------------Elements of Set A and B-------------
A = { 1 2 3 }
B = { 4 5 6 }
.......Cartesian Product....
(1,4)  (1,5)  (1,6)  (2,4)  (2,5)  (2,6)  (3,4)  (3,5)  (3,6)

------------------- MENU FOR RELATIONS----------------
   PRESS 1,  CHECK NUMBER OF RELATIONS
   PRESS 2,  CHECK RELATIONS EXIST OR NOT
   PRESS 3   Exit
Enter Your Choice: 1

|--------------RELATION-------------|
  1-TOTAL NUMBER OF RELATION
  2-REFLEXIVE
  3-SYMMETRIC
  4-ANTI-SYMMETRIC
  5-REFLEXIVE AND SYMMETRIC RELATION
  6-ANTISYMMETRIC AND SYMMETRIC
  7-BACK TO MAIN MENU
```

## Contributors
- **Usman Ahmad** (21F-9500)
- **Abdul Rehman** (21F-9507)


