#pragma once
#include "ICommand.h"
#include "Light.h"

namespace DesignPatterns::Behavioral::Command
{
    class DimCommand : public ICommand
    {
        std::weak_ptr<Light> light_ptr;

    public:
        DimCommand(std::weak_ptr<Light> light_ptr) : light_ptr(light_ptr) {};
        void execute() override;
    };
}