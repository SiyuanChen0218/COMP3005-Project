#ifndef FINAL_CONTROL_H
#define FINAL_CONTROL_H

#include "View.h"

#include <iostream>

using namespace std;

#include <string>

class Control {
private:
    View view;

public:
    Control();

    ~Control();

    void launch();
    void launch1();
    void launch2();

};


#endif
