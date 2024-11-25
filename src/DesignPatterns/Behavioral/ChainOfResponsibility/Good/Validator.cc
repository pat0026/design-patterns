#include <iostream>
#include "Validator.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    std::string ltrim(const std::string &s)
    {
        size_t start = s.find_first_not_of(" \t\n\r\f\v");
        return (start == std::string::npos) ? "" : s.substr(start);
    }

    std::string rtrim(const std::string &s)
    {
        size_t end = s.find_last_not_of(" \t\n\r\f\v");
        return (end == std::string::npos) ? "" : s.substr(0, end + 1);
    }

    std::string trim(const std::string &s)
    {
        return ltrim(rtrim(s));
    }

    bool Validator::do_handle(const std::shared_ptr<HttpRequest> &request)
    {
        std::cout << "Validating" << std::endl;    
        std::string username = request->get_username();
        std::string password = request->get_password();

        request->validated_username = trim(username);
        request->validated_password = trim(password);
        return request->validated_password.empty() || request->validated_username.empty();
    }
}