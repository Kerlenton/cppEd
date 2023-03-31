#include <iostream>

struct Foo;
struct Bar;

struct Foo {
    Foo() {}
    Foo(const Bar &) { std::cout << "Ctor Bar -> Foo" << std::endl; }
};

struct Bar {
    Bar() {}
    Bar(const Foo &) { std::cout << "Ctor Foo -> Bar" << std::endl; }
    operator Foo() {
    std::cout << "Op Bar -> Foo" << std::endl;
    return Foo{};
  }
};

int main() {
    Bar b;
    Foo f1{b};  // direct-init, ctor
    Foo f2 = b; // copy-init, ctor vs op, op wins (c++ 14)
}
