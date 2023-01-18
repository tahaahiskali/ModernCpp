#include <iostream>
#include <functional>

void printString(const std::string& str) {
    std::cout << str << std::endl;
}

int main() {
    std::string myString = "Hello, World!";

    // create a new function object by binding the first argument of printString to myString
    auto boundFunction = std::bind(printString, myString);
    boundFunction(); // this will print "Hello, World!"

    // create a new function object by binding the first argument of printString to a new string
    boundFunction = std::bind(printString, "Goodbye, World!");
    boundFunction(); // this will print "Goodbye, World!"

    return 0;
}
