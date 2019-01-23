//
// Created by andrey on 23.01.19.
//

#ifndef STATEMACHINE_LAMP_H
#define STATEMACHINE_LAMP_H

#include "StateMachine.h"

class Lamp : public StateMachine {
public:
    Lamp();
    void setState(int) override;
    void switch_on();
    void switch_off();
    std::string getState();

private:
    StateMachine::State* on;
    StateMachine::State* off;
};


#endif //STATEMACHINE_LAMP_H