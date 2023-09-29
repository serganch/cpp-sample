#include <iostream>

#include "main.h"
#include "B.h"

bool bar1() { return true; }

bool foo2() {
    return bar1();
}

extern const char* getVersion();

int main() {
    std::cout << "Hello World!";
    bar1();

    // some comment to trigger code model build
    A* a = new A();
    std::cout << a->foo();
    delete a;

    A* b = new B();
    std::cout << b->foo();
    delete b;

    std::cout << getVersion();
    std::cout << getVersion();

    return 0;
}
