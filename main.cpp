#include "mezorian/DepTest_ModuleA/ModuleA.h"
#include "mezorian/DepTest_ModuleB/ModuleB.h"
#include "mezorian/DepTest_ModuleC/ModuleC.h"

int main() {
    ModuleA a;
    ModuleB b;
    ModuleC c;
    a.doSmth();
    b.doSmth();
    c.doSmth();
    return 0;
}
