# OOPS in C++

## 📘 Introduction

Object-Oriented Programming (OOP) is a programming paradigm based on the concept of **classes and objects**.

---

## 🔹 Classes & Objects

### ✅ What is a Class?

A **class** is a blueprint for creating objects.  
It defines:

- Data Members (variables)
- Member Functions (methods)

---

## 🔹 Example: Teacher Class

```cpp
#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;

    t1.name = "Shraddha";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary = 0;

    return 0;
}
