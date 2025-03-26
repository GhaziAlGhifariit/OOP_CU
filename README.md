# C++ Basic Classes

This project implements five basic C++ classes:

1. **Calculator** - Performs arithmetic operations (addition, subtraction, multiplication, division) on two numbers.
2. **Student** - Stores and displays student information (name, ID, and grade).
3. **Rectangle** - Calculates the area of a rectangle given its width and height.
4. **Counter** - Provides a counter that can increment and return the current count.
5. **Point** - Represents a point in 2D space and calculates its distance from the origin (0,0).

## Class Descriptions

### 1. Calculator Class
- Provides static methods for basic arithmetic operations:
  - `add(a, b)`: Returns the sum of `a` and `b`.
  - `subtract(a, b)`: Returns the difference of `a` and `b`.
  - `multiply(a, b)`: Returns the product of `a` and `b`.
  - `divide(a, b)`: Returns the quotient of `a` and `b` (handles division by zero).

### 2. Student Class
- Stores student details:
  - `name`: Student's name.
  - `ID`: Student's unique identification number.
  - `grade`: Student's grade.
- Method:
  - `display()`: Prints student information.

### 3. Rectangle Class
- Stores dimensions of a rectangle:
  - `width`
  - `height`
- Method:
  - `area()`: Returns the area of the rectangle.

### 4. Counter Class
- Stores a counter value (default 0).
- Methods:
  - `increment()`: Increases the counter by 1.
  - `getCount()`: Returns the current count.

### 5. Point Class
- Stores coordinates of a point:
  - `x`
  - `y`
- Method:
  - `distanceFromOrigin()`: Calculates and returns the distance from the origin `(0,0)` using the formula `sqrt(x^2 + y^2)`.

## Compilation and Execution

1. Compile the code using a C++ compiler:
   ```sh
   g++ main.cpp -o main
   ```
2. Run the executable:
   ```sh
   ./main
   ```

## Example Output
```sh
Addition: 8
Subtraction: 2
Multiplication: 15
Division: 1.66667
Student Name: John Doe, ID: 101, Grade: 90.5
Rectangle Area: 20
Counter: 2
Distance from origin: 5
```

## Author
- Created by Ghazi

