#include <iostream>

#include "main.h"
#include "A.h"

bool bar1() { return true; }

bool foo1() {
    return bar1();
}

int main() {
    std::cout << "Hello World!";
    bar1();

    A* a = new A();
    std::cout << a->foo();
    delete a;

    foo1();

    return 0;
}