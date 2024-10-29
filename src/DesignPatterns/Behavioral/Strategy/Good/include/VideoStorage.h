#pragma once
#include <memory>
#include <string>

#include "ICompressor.h"
#include "IOverlay.h"

namespace DesignPatterns::Behavioral::Strategy
{
    class VideoStorage
    {
        std::unique_ptr<ICompressor> compressor;
        std::unique_ptr<IOverlay> overlay;

    public:
        VideoStorage(std::unique_ptr<ICompressor> compressor, std::unique_ptr<IOverlay> overlay) : compressor(std::move(compressor)), overlay(std::move(overlay)) {};
        void store(std::string filename);
    };
}