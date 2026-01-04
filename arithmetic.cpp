#include <iostream>
using std::cout;
using std::endl;

int main() {
    cout << "a = 8, b = 3" << endl;

    int a = 8, b = 3;

    cout << "Addition" << endl;

    cout << "a + b = " << (a + b) << endl;

    cout << "Subtraction" << endl;
  
    cout << "a - b = " << (a - b) << endl;

    cout << "Multiplication" << endl;
  
    cout << "a * b = " << (a * b) << endl;
  
    cout << "Integer Division" << endl;

    cout << "a / b = " << (a / b) << endl;
	
    cout << "Float Division" << endl;

    cout << "a / b = " << (float(a) / float(b)) << endl;
  
    cout << "Modulo" << endl;

    cout << "a %% b = " << (a % b) << endl;
  
    cout << "Increment" << endl;
    
    int x = 5;
	
    cout << "x = 5" << endl;

    int y = ++x;
    cout << "++x = " << y << endl;

    int z = x++;

    cout << "x++ = " << z << endl;

    cout << "Decrement" << endl;

    int h = 5;

    cout << "h = 5" << endl;

    int i = --h;

    cout << "--h = " << i << endl;

    int j = h--;

    cout << "h-- = " << j << endl;
    
    return 0;
}

