#include <string>
#include <iostream>

class Foo2
{
public:
    Foo2() { std::cout << "Foo2 Created." << std::endl; }
    ~Foo2() { std::cout << "Foo2 Destroyed." << std::endl; }
};
