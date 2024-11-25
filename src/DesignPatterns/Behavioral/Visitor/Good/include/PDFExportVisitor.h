#pragma once
#include "Visitor.h"
#include "Law.h"
#include "Restaurant.h"
#include "Retail.h"

namespace DesignPatterns::Behavioral::Visitor
{
    class PDFExportVisitor : public Visitor
    {
    public:
        void visit_law(Law *law) override;
        void visit_restaurant(Restaurant *restaurant) override;
        void visit_retail(Retail *retail) override;
    };
}