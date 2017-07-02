#include <string>
#include <iostream>

#include <FooBar/Foo2.hh>

class Foo
{
public:
    int PrintFoo();
    int PrintFoo2();
    std::string foo;
    Foo() { std::cout << "Foo Created." << std::endl; }
    ~Foo() { std::cout << "Foo Destroyed." << std::endl; }
private:
};
