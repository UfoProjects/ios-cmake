#include "Foo.hh"
#include <string>
#include <iostream>

#import <Foundation/Foundation.h>

int Foo::PrintFoo2()
{
#if __cplusplus
    std::cout << "C++ environment detected." << std::endl;
#endif
#if __cplusplus && __OBJC__
    std::cout << "ObjC++ environment detected." << std::endl;
#endif
    std::cout << "Foo::PrintFoo2() called." << std::endl;
    return 1;
}
