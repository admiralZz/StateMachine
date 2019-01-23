//
// Created by andrey on 23.01.19.
//

#include "Lamp.h"

Lamp::Lamp()
{
    // Создаем два состояния (вкл\выкл)
    on = new State("On", 1);
    off = new State("Off", 0);
    // Определяем связи
    addChains(off,on);
    addChains(on,off);
    // Начальное состояние лампочки
    currentState = off;
}
void Lamp::setState(int state) {
    switch (state)
    {
        case 0:
            currentState->changeState(this, off);
            break;
        case 1:
            currentState->changeState(this, on);
            break;
        default:
            std::cout << "Wrong state" << std::endl;
            break;
    }
}
void Lamp::switch_on() {
    setState(1);
}
void Lamp::switch_off() {
    setState(0);
}
std::string Lamp::getState() {
    return currentState->getName() + std::to_string(currentState->getSensorValue());
}