#import "CppInterface.h"
#include <FooBar/Foo.hh>

@interface CppInterface () 
{
    Foo* myFoo;
    Foo2 myFoo2;
}
@end

@implementation CppInterface

-(instancetype)init
{
    self = [super init];
    if (self) {
        myFoo = new Foo();
        myFoo->PrintFoo();
        myFoo->PrintFoo2();
        delete myFoo;
        myFoo = nullptr;
    }
    return self;
}

@end
