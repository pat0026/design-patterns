#include <iostream>
#include <memory>

#include "VideoStorage.h"
#include "OverlayBlur.h"
#include "CompressorMP4.h"

using namespace DesignPatterns::Behavioral::Strategy;

int main(int, char**){
    std::unique_ptr<OverlayBlur> overlay =  std::make_unique<OverlayBlur>();
    std::unique_ptr<CompressorMP4> compressor = std::make_unique<CompressorMP4>();
    VideoStorage vid(std::move(compressor), std::move(overlay));

    vid.store("LOST");

}