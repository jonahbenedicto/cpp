#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char** argv)
{
	std::vector <int> v{2, 3, 7, 14, 23};
	std::for_each(v.begin(), v.end(), [](int x) {
		if (x % 2 == 0)
			std::cout << x << " is even" << std::endl;
		else
			std::cout << x << " is odd" << std::endl;
	});
}
