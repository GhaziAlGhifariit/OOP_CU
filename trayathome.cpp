#include <iostream>
#include <cmath>
using namespace std;

// Calculator class
class Calculator {
public:
    static double add(double a, double b) { return a + b; }
    static double subtract(double a, double b) { return a - b; }
    static double multiply(double a, double b) { return a * b; }
    static double divide(double a, double b) { 
        if (b != 0) return a / b; 
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

// Student class
class Student {
private:
    string name;
    int ID;
    double grade;
public:
    Student(string n, int i, double g) : name(n), ID(i), grade(g) {}
    void display() {
        cout << "Student Name: " << name << ", ID: " << ID << ", Grade: " << grade << endl;
    }
};

// Rectangle class
class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() { return width * height; }
};

// Counter class
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void increment() { count++; }
    int getCount() { return count; }
};

// Point class
class Point {
private:
    double x, y;
public:
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}
    double distanceFromOrigin() { return sqrt(x * x + y * y); }
};

// Main function for testing
int main() {
    // Calculator Test
    cout << "Addition: " << Calculator::add(5, 3) << endl;
    cout << "Subtraction: " << Calculator::subtract(5, 3) << endl;
    cout << "Multiplication: " << Calculator::multiply(5, 3) << endl;
    cout << "Division: " << Calculator::divide(5, 3) << endl;
    
    // Student Test
    Student s("John Doe", 101, 90.5);
    s.display();
    
    // Rectangle Test
    Rectangle r(4, 5);
    cout << "Rectangle Area: " << r.area() << endl;
    
    // Counter Test
    Counter c;
    c.increment();
    c.increment();
    cout << "Counter: " << c.getCount() << endl;
    
    // Point Test
    Point p(3, 4);
    cout << "Distance from origin: " << p.distanceFromOrigin() << endl;
    
    return 0;
}
