#include <iostream>

#ifndef N0
int foo(int x) { return 0; }
#endif

#ifndef N1
int foo(const int& x) { return 1; }
#endif

#ifndef N2
template <typename T> T foo(T x) { return 2; }
#endif

#ifndef N3
int foo(char x) { return 3; }
#endif

#ifndef N4
int foo(short x) { return 4; }
#endif

#ifndef N5
int foo(const char &x) { return 5; }
#endif

#ifndef N6
int foo(double x) { return 6; }
#endif

#ifndef N7
int foo(...) { return 7; }
#endif

#ifndef N8
int foo(int &x) { return 8; }
#endif

int main() {
    std::cout << "result: " << foo(10) << std::endl;
    return 0;
}
