#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

using namespace std;

class Logger {
    public:
        Logger() {}
        void log(string val_) {
            cout << val_ << endl;
        }
};

#endif // LOGGER_H
