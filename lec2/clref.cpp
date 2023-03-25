#include <iostream>

int foo() { return 42; }

int main() {
	int x;
	int& rx = x;
	const int& l = foo();
	std::cout << &l << " " << &x << " " << &rx << std::endl;
}
