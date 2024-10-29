#include "IOverlay.h"

namespace DesignPatterns::Behavioral::Strategy 
{
    class OverlayBlur : public IOverlay
    {
        void filter() override;
    };
}