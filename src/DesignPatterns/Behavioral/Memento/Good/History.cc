#include <iostream>

#include "History.h"

namespace DesignPatterns::Behavioral::Memento
{
    void History::back_up()
    {
        states.push_back(editor.create_state());
    }

    void History::undo()
    {
        if(states.empty())
            return;

        editor.restore(states.back());
        states.pop_back();
    }

    void History::show_history() const
    {
        std::cout << "History: Here is the list of mementos:" << std::endl;
        for (const auto &state : states)
        {
            std::cout << state.get_name() << std::endl;
        };
    }
}