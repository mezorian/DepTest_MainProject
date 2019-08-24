#include "mezorian/DepTest_ModuleA/ModuleA.h"
#include "mezorian/DepTest_ModuleB/ModuleB.h"
#include "mezorian/DepTest_ModuleC/ModuleC.h"

int main() {
    submodule_a::ModuleA a;
    submodule_b::ModuleB b;
    submodule_c::ModuleC c;
    a.doSmth();
    b.doSmth();
    c.doSmth();
    return 0;
}
