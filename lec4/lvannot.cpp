#include <iostream>

struct S {
    int n = 0;
    int& access() & { return n; }
};

int main() {
    S x;
    int& y = x.access(); // ok
    int& z = S{}.access(); // CE
    std::cout << y << " " << z << std::endl;
}
