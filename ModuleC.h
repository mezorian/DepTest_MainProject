#ifndef MODULEC_H
#define MODULEC_H

#include "Logger.h"


class ModuleC {
    public:
        ModuleC() {}
        void doSmth(){
            Logger l;
            l.log("ModuleC is doing smth");
        }
};

#endif // MODULEC_H
