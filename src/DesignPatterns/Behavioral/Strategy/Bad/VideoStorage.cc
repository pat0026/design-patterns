#pragma once
#include <iostream>

#include "Compressors.h"
#include "Overlays.h"
#include "VideoStorage.h"

namespace DesignPatterns::Behavioral::Strategy
{
    void VideoStorage::store(std::string filename)
    {
        switch(compressor)
        {
        case MOV:
            std::cout << "Compressing using MOV" << std::endl;
            break;
        case MP4:
            std::cout << "Compressing using MP4" << std::endl;
            break;
        case WEBM:
            std::cout << "Compressing using WEBM" << std::endl;
            break;
        }

        switch(overlay)
        {
        case BLACK_AND_WHITE:
            std::cout << "Applying black and white overlay" << std::endl;
            break;
        case BLUR:
            std::cout << "Applying blur overlay" << std::endl;
            break;
        case NONE:
            std::cout << "Not applying an overlay" << std::endl;
            break;
        }

        std::cout << "Storing video to " << filename << std::endl;
    }

}