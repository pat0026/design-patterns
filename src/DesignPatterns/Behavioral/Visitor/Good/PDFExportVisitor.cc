#include <iostream>
#include "PDFExportVisitor.h"

namespace DesignPatterns::Behavioral::Visitor
{
    void PDFExportVisitor::visit_law(Law *law)
    {
        std::cout << "Exporting law client as PDF" << std::endl;
    }

    void PDFExportVisitor::visit_restaurant(Restaurant *restaurant)
    {
              std::cout << "Exporting restaurant client as PDF" << std::endl;
    }

    void PDFExportVisitor::visit_retail(Retail *retail)
    {
               std::cout << "Exporting retail client as PDF" << std::endl;
    }
}