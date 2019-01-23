//
// Created by andrey on 23.01.19.
//

#include "StateMachine.h"

void StateMachine::addChains(State* from_state, State* to_state) {
    from_state->addChain(to_state);
}
std::string StateMachine::State::getName() {
    return this->name;
}
int StateMachine::State::getSensorValue() {
    return this->sensor_value;
}

StateMachine::State::State(const std::string name, int sensor_value) {
    this->name = name;
    this->sensor_value = sensor_value;
}
void StateMachine::State::addChain(State* state) {
    transition_rules.push_back(state);
}
bool StateMachine::State::changeState(StateMachine* machine, StateMachine::State* to_state) {
    if(this->name == to_state->name)
    {
        std::cout << "Already state is " << name << std::endl;
        return false;
    }

    for(StateMachine::State* state : transition_rules)
        if(state->name == to_state->name)
        {
            machine->currentState = to_state;
            return true;
        }
    return false;
}
