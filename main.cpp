#include <iostream>

#include "main.h"
#include "B.h"

bool bar1() { return true; }

bool foo2() {
    return bar1();
}

extern const char* getVersion();

int main() {
    std::cout << "你好世界";
    bar1();

    A* a = new A();
    std::cout << a->foo();
    delete a;

    A* b = new B();
    std::cout << b->foo();
    delete b;

    foo2();

    // comment to check ClangD addresses correct line in correct revision
    std::cout << getVersion();

    return 0;
}