#include <iostream>

struct MySmallClass {
	int t = 1;
	MySmallClass() { std::cout << "small ctor" << std::endl; }
	~MySmallClass() { std::cout << "smal dtor" << std::endl; }
};

struct MyBigClass {
    int t = 1, p = 2, q = 3;
    MyBigClass() { std::cout << "big ctor" << std::endl; }
    ~MyBigClass() { std::cout << "big dtor" << std::endl; }
};

int main() {
	MyBigClass* S = new MyBigClass;
	MySmallClass* T = new MySmallClass;
	MyBigClass* P = new MyBigClass[5];
	MySmallClass* Q = new MySmallClass[7];
	//delete[] T; // terribly wrong
}
