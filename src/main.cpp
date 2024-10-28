#include <iostream>
#include "User.h"
#include "UserService.h"

int main(int, char**){
    std::cout << "Hello, from DesignPatterns!" << std::endl;
    S::User user = S::User("Pat","patrick.caparros026@gmail.com");
    S::UserService user_service = S::UserService();

    user_service.Register(user);
}
