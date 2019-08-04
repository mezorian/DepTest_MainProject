#ifndef ModuleB_H
#define ModuleB_H

#include "Logger.h"


class ModuleB {
    public:
        ModuleB() {}
        void doSmth() {
            Logger l;
            l.log("ModuleB is doing smth");
        }
};

#endif // ModuleB_H
