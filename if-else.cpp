#include <iostream>

int main() {
    int age = 16;

    if (age >= 18) {
        std::cout << "You can vote!" << std::endl;
    } 
    else if (age >= 13) {
        std::cout << "You are a teenager, but too young to vote." << std::endl;
    } 
    else {
        std::cout << "You are a child." << std::endl;
    }

    return 0;
}
