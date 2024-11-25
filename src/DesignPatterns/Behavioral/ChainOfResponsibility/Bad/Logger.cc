#include <iostream>
#include "Logger.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    void Logger::log(const std::shared_ptr<HttpRequest> &request)
    {
        std::cout << "Log" << std::endl;
    }
}