#include <iostream>

struct LoudCtor {
	LoudCtor(std::string s) {
		std::cout << s << " ctor!" << std::endl;
	}
};

LoudCtor global("Global");

int main() {
	std::cout << "Main started" << std::endl;
	LoudCtor stack("Stack");
	LoudCtor* pheap = new LoudCtor("Heap");
	delete pheap;
}
