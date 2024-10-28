#include <memory>

#include "DraftState.h"
#include "ModerationState.h"


namespace DesignPatterns::Behavioral::StatePattern
{   

    void DraftState::publish()
    {
        doc.state = std::make_unique<ModerationState>(doc);
    }
}
