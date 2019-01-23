//
// Created by andrey on 23.01.19.
//

#ifndef STATEMACHINE_STATEMACHINE_H
#define STATEMACHINE_STATEMACHINE_H

#include <vector>
#include <iostream>

class StateMachine {
public:
    class State
    {
    public:
        State(std::string name,int sensor_value);
        std::string getName();
        int getSensorValue();
        void addChain(State* state);
        bool changeState(StateMachine* machine, State* to_state);
    private:
        std::string name;
        int sensor_value;
        std::vector<State*> transition_rules;
    };

public:
    virtual void setState(int) = 0;
protected:
    void addChains(State* from_state, State* to_state);
    StateMachine::State* currentState;
};


#endif //STATEMACHINE_STATEMACHINE_H
