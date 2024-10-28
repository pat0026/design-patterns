#include <iostream>
#include "Document.h"
#include "DocumentState.h"

using namespace DesignPatterns::Behavioral::StatePattern;

int main(int, char**){
    Document doc;
    doc.current_user_role = ADMIN;
    doc.state = DRAFT;

    doc.publish();

    doc.current_user_role = READER;
    doc.publish();
    doc.publish();

}