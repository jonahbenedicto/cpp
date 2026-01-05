#include <iostream>
#include <any>

int main() {
    std::any any_value;

    any_value = 42;
    std::cout << "int value: " << std::any_cast<int>(any_value) << '\n';

    any_value = 3.14;
    std::cout << "double value: " << std::any_cast<double>(any_value) << '\n';

    any_value = std::string("Hello, world!");
    std::cout << "string value: " << std::any_cast<std::string>(any_value) << '\n';

    return 0;
}

