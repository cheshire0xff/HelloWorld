#pragma once
#include <iostream>

struct Foo
{
    Foo()
    {
        std::cout << "Foo()\n";
    }
    ~Foo()
    {
        std::cout << "Foo()\n";
    }
};