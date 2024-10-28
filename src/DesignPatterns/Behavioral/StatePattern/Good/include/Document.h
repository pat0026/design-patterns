#pragma once
#include <memory>

#include "UserRoles.h"
#include "State.h"

namespace DesignPatterns::Behavioral::StatePattern
{
    class Document
    {
    public:
        std::unique_ptr<State> state;
        UserRoles current_user_role;

        void publish();
    };

}