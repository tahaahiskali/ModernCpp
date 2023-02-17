#include <iostream>

int main() {
    int x = 42;
    decltype(x) y = 56;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}