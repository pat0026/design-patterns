#include "IOverlay.h"

namespace DesignPatterns::Behavioral::Strategy
{
    class OverlayNone : public IOverlay
    {
        void filter() override;
    };
}