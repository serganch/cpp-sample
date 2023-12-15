#include <iostream>

#include "main.h"
#include "B.h"

bool bar1() { return true; }

bool foo2() {
    return bar1();
}

// comment with chinese 语言支持
extern const char* getVersion();

int main() {
    std::cout << "Hello World! ";
    bar1();

    // a->foo() will be called in NDEBUG mode only
    A* a = new A();
    #ifdef NDEBUG
        std::cout << a->foo();
    #endif
    delete a;

    A* b = new B();
    std::cout << b->foo();
    delete b;

    foo2();

    std::cout << getVersion();

    return 0;
}