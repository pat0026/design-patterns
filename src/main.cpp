#include <iostream>
#include <memory>
#include "PostsDialogBox.h"

using namespace DesignPatterns::Behavioral::Mediator;

int main(int, char **)
{
    std::unique_ptr<PostsDialogBox> posts = std::make_unique<PostsDialogBox>();
    posts->simulate_user_interaction();
}