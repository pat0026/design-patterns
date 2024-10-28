#pragma once
#include "State.h"

namespace DesignPatterns::Behavioral::StatePattern
{
    class PublishedState : public State
    {
    public:
        void publish() override;
    };
}