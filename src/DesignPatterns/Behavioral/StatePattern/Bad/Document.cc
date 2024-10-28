#include "Document.h"

namespace DesignPatterns::Behavioral::StatePattern
{
    void Document::publish()
    {
        switch (state)
        {
        case DRAFT:
            state = MODERATION;
            break;
        case MODERATION:
            if( current_user_role == ADMIN)
                state = PUBLISHED;
            break;
        case ADMIN:
            break;
        }
        
    }
}
