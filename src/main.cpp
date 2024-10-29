#include <iostream>
#include <memory>

#include "VideoStorage.h"


using namespace DesignPatterns::Behavioral::Strategy;

int main(int, char**){
    VideoStorage vid(MP4);

    vid.store("LOST");

}