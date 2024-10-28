#pragma once
#include "UserRoles.h"
#include "DocumentState.h"

namespace DesignPatterns::Behavioral::StatePattern
{
    class Document
    {
    public:
        DocumentStates state;
        UserRoles current_user_role;

        void publish();
    };

}