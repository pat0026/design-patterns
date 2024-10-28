#include <memory>
#include "ModerationState.h"
#include "PublishedState.h"

namespace DesignPatterns::Behavioral::StatePattern
{
    void ModerationState::publish()
    {
        if(doc.current_user_role == ADMIN)
            doc.state = std::make_unique<PublishedState>();
    }
}
