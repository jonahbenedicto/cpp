#include <iosteam>
using namespace std;

int main() {
    cout << "a = 6, b = 4" << endl;

    int a = 6, b = 4;
	
    cout << "Assignment" << endl;

    cout << "a = " << a << endl;

    cout << "Add and Assignment" << endl;
  
    cout << "a += b is " << (a += b) << endl;
 
    cout << "Subtract and Assignment" << endl;

    cout << "a -= b is " << (a -= b) << endl;
  
    cout << "Multiply and Assignment" << endl;

    cout << "a *= b is " << (a *= b) << endl;
  
    cout << "Divide and Assignment" << endl;

    cout << "a /= b is " << (a /= b);

    return 0;
}
