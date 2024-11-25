#include "Handler.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    void Handler::handle(const std::shared_ptr<HttpRequest> &request)
    {
        if (do_handle(request))
            return;

        if (next)
            next->handle(request);
    }

    std::shared_ptr<Handler> Handler::set_next(std::shared_ptr<Handler> next)
    {
        this->next = next;
        return this->next;
    }
}