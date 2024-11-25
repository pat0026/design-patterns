#pragma once
#include "Handler.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    class Validator : public Handler
    {
    protected:
        bool do_handle(const std::shared_ptr<HttpRequest> &request) override;
    };
}