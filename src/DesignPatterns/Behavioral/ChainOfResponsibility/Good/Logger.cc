#include <iostream>
#include "Logger.h"


namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    bool Logger::do_handle(const std::shared_ptr<HttpRequest> &request)
    {
        std::cout << "Logging" << std::endl;
        return false;
    }
}