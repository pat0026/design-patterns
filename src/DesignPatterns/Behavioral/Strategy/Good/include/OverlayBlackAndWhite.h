#include "IOverlay.h"

namespace DesignPatterns::Behavioral::Strategy
{
    class OverlayBlackAndWhite : public IOverlay
    {
        void filter() override;
    };
}