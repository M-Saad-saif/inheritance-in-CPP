# C++ Inheritance Examples  
This repository contains clear and structured examples of **Single Inheritance**, **Multilevel Inheritance**, and **Multiple Inheritance** in C++. Each program demonstrates how inheritance improves code reusability, organizes data, and supports object-oriented design.

---

## 📌 **1. Single Inheritance**
### **Classes:** `Person → Student`  
This example shows how a derived class inherits attributes from a base class.

**Features:**
- `Person` class with `name` and `age`
- `Student` class extending `Person` with `rollno`
- User input through member functions
- Output using display functions
- Constructor demonstration

---

## 📌 **2. Multilevel Inheritance**
### **Classes:** `Person → Student → GradStudent`  
This example demonstrates how data flows through a chain of inheritance.

**Features:**
- Three-level class hierarchy
- Operator Overloading (`>>` and `<<`) for clean I/O
- Additional `researchArea` field in `GradStudent`
- Constructor execution showcasing inheritance order

---

## 📌 **3. Multiple Inheritance**
### **Classes:** `Person + Student → TA`
This program shows how a class can inherit from *more than one* base class.

**Features:**
- `TA` inherits from both `Person` and `Student`
- Shared attributes: `name`, `age`, `rollno`
- Operator Overloading for input and output
- Parameterized constructor for advanced usage

---

## 🛠 **Concepts Covered**
- Access specifiers (`private`, `protected`, `public`)
- Constructor chaining
- Code reuse with inheritance
- Friend functions
- Operator overloading
- Realistic class modeling

---

## 🚀 **How to Run**
1. Clone the repository:
   ```bash
   git clone https://github.com/M-Saad-saif/inheritance-in-CPP
