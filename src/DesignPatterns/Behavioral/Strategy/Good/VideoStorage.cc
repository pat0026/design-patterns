#include <iostream>

#include "VideoStorage.h"

namespace DesignPatterns::Behavioral::Strategy 
{
        void VideoStorage::store(std::string filename)
        {
            compressor->compress();
            overlay->filter();
            std::cout << "Storing video to " + filename;

        }
}