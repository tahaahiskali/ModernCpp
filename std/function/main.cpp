#include <iostream>
#include <functional>

// A simple function that takes an int and returns the square of the int
int square(int x) {
  return x * x;
}

int main() {
  // Define a function pointer that points to the square function
  int (*fptr)(int) = &square;

  // Call the function through the function pointer
  int result = fptr(5);
  std::cout << "Result: " << result << std::endl;  // Outputs "Result: 25"

  // Create a std::function object that holds a reference to the square function
  std::function<int(int)> func = &square;

  // Call the function through the std::function object
  result = func(5);
  std::cout << "Result: " << result << std::endl;  // Outputs "Result: 25"

  return 0;
}

