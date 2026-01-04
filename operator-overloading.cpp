#include <iostream>

using namepsace std;

class Number
{
public:
	int n;

	Number(int set_n)
	{
		n = set_n;
	}

	Number operator+(const Number &that) 
	{
		return Number(this->n + that.n);
	}

	Number operator==(const Number &that)
	{
		return (this->n == that.n);
	}	
}

int main()
{
	Number a(5);
	Number b(10);

	Number c = a + b;

	cout << "c.n " << c.n << endl;
}
