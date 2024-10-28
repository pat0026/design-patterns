#include "EditorState.h"
#include "fmt/core.h"

namespace DesignPatterns::Behavioral::Memento
{
    std::string EditorState::get_content() const
    {
        return content;
    }

    std::string EditorState::get_title() const
    {
        return title;
    }

    boost::posix_time::ptime EditorState::get_date() const
    {
        return created_at;
    }

    std::string EditorState::get_name() const
    {
        return fmt::format("{} / {}", boost::posix_time::to_simple_string(created_at), title);
    }
}
