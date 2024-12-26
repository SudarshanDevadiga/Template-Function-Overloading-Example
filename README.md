# Template Function Overloading Example

A C++ program demonstrating function template overloading with a specific non-template function implementation.

## Description

This program showcases how template functions can coexist with regular functions of the same name, demonstrating function overloading with templates. It includes a generic template function and an explicit function for integer type.

### Key Features
- Template function implementation
- Function overloading
- Type-specific handling
- Template specialization through overloading

## Function Definitions

```cpp
// Generic template function
template <class T>
void display(T x)
{
    cout << "Template display: " << x << "\n";
}

// Explicit function for int type
void display(int x)
{
    cout << "Explicit display: " << x << "\n";
}
