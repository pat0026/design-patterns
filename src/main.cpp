#include <iostream>
#include <vector>
#include <memory>

#include "RemoteControl.h"
#include "TurnOffCommand.h"
#include "DimCommand.h"
#include "TurnOnCommand.h"

using namespace DesignPatterns::Behavioral::Command;

int main(int, char **)
{
    std::shared_ptr<Light> light = std::make_shared<Light>();
    RemoteControl rc(std::make_unique<TurnOnCommand>(light));
    rc.press_button();
    rc.set_command(std::make_unique<DimCommand>(light));
    rc.press_button();
    rc.set_command(std::make_unique<TurnOffCommand>(light));
    rc.press_button();
}