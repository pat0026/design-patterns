#include <iostream>
#include <vector>
#include <memory>

#include "RemoteControl.h"

using namespace DesignPatterns::Behavioral::Command;

int main(int, char**){
    std::shared_ptr<Light> light = std::make_shared<Light>();
    RemoteControl rc(light);

    rc.push_button(true);
    rc.dim_lights();
}