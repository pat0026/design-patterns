#pragma once
#include <memory>
#include "HttpRequest.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    class Handler
    {
        std::shared_ptr<Handler> next;

    protected:
        virtual bool do_handle(const std::shared_ptr<HttpRequest> &request) = 0;

    public:
        void handle(const std::shared_ptr<HttpRequest> &request);
        std::shared_ptr<Handler> set_next(std::shared_ptr<Handler> next);
    };
}