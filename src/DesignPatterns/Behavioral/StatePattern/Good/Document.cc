#include "Document.h"

namespace DesignPatterns::Behavioral::StatePattern
{
    void Document::publish()
    {
        state->publish();
    }
}
