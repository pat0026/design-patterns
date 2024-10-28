#pragma once

#include <string>
#include <boost/date_time/posix_time/posix_time.hpp>

namespace DesignPatterns::Behavioral::Memento
{
    class EditorState
    {
        std::string content;
        std::string title;
        boost::posix_time::ptime created_at;

    public:
        EditorState(std::string content, std::string title) : content(content), title(title), created_at(boost::posix_time::second_clock::local_time()) {};
        std::string get_content() const;
        std::string get_title() const;
        boost::posix_time::ptime get_date() const;
        std::string get_name() const;
    };
}