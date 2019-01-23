#include <iostream>
#include "Lamp.h"

int main() {
    Lamp lamp;
    lamp.switch_off();
    lamp.switch_on();
    std::cout << "Current state: " << lamp.getState() << std::endl;
    lamp.switch_on();
    lamp.switch_off();
    std::cout << "Current state: " << lamp.getState() << std::endl;
    return 0;
}