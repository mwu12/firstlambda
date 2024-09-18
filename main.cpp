#include <iostream>

int main()
{
    // Lambda with void return type
    auto voidLambda = []() -> void {
        std::cout << "This lambda returns void." << std::endl;
    };

    // Lambda with an int return type, but we will ignore the return value
    auto intLambda = []() -> int {
        std::cout << "This lambda returns an int, but we will ignore it." << std::endl;
        return 42;
    };

    // Call the lambdas
    voidLambda();
    intLambda(); // Ignoring the return value

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
