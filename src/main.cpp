#include <iostream>
#include <memory>
#include "Document.h"
#include "State.h"
#include "DraftState.h"

using namespace DesignPatterns::Behavioral::StatePattern;

int main(int, char**){
    Document doc;
    doc.state = std::make_unique<DraftState>(doc);
    doc.current_user_role = ADMIN;

    doc.publish();

    doc.current_user_role = READER;
    doc.publish();
    doc.publish();

}