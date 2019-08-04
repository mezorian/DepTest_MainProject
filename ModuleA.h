#ifndef ModuleA_H
#define ModuleA_H

#include "Logger.h"


class ModuleA {
    public:
        ModuleA() {}
        void doSmth() {
            Logger l;
            l.log("ModuleA is doing smth");
        }
};

#endif // ModuleA_H
