#include <iostream>
using namespace std;

int main() {
    cout << "a = 6, b = 4" << endl;

    int a = 6, b = 4;

    // Bitwise AND operator
    cout << "a & b is " << (a & b) << endl;

    // Bitwise OR operator
    cout << "a | b is " << (a | b) << endl;

    // Bitwise XOR operator
    cout << "a ^ b is " << (a ^ b) << endl;

    // Bitwise Left Shift operator
    cout << "a << 1 is " << (a << 1) << endl;

    // Bitwise Right Shift operator
    cout << "a >> 1 is " << (a >> 1) << endl;

    // Bitwise NOT operator
    cout << "~(a) is " << ~(a);

    return 0;
}
