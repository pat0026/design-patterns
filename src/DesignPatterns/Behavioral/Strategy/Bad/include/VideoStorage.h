#pragma once
#include <string>

#include "Compressors.h"
#include "Overlays.h"

namespace DesignPatterns::Behavioral::Strategy
{
    class VideoStorage
    {
    private:
        Compressors compressor;
        Overlays overlay;

    public:
        VideoStorage(Compressors compressor, Overlays overlay = NONE) : compressor(compressor), overlay(overlay) {};

        void store(std::string filename);
    };
}