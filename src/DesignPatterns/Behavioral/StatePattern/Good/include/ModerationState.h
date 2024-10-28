#pragma once
#include "State.h"
#include "Document.h"

namespace DesignPatterns::Behavioral::StatePattern
{
    class ModerationState : public State
    {
        Document &doc;

    public:
        ModerationState(Document &doc) : doc(doc) {};
        void publish() override;
    };
}