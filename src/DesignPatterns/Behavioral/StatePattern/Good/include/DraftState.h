#pragma once
#include "State.h"
#include "Document.h"

namespace DesignPatterns::Behavioral::StatePattern
{
    class DraftState : public State
    {
        Document &doc;
    public:
        DraftState(Document &doc) : doc(doc) {};
        void publish() override;
    };
}