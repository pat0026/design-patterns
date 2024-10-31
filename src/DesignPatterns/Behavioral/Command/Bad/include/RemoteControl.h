#pragma once
#include "Light.h"
#include <memory>

namespace DesignPatterns::Behavioral::Command
{
    class RemoteControl
    {
        std::weak_ptr<Light> light;

    public:
        RemoteControl(std::weak_ptr<Light> light) : light(light) {};
        void push_button(bool turn_on);
        void dim_lights();
    };
}