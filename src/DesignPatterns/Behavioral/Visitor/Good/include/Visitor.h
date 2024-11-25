#pragma once


namespace DesignPatterns::Behavioral::Visitor
{
    class Retail; 
    class Law; 
    class Restaurant; 
    
    class Visitor
    {
    public:
        virtual void visit_retail(Retail *retail) = 0;
        virtual void visit_law(Law *law) = 0;
        virtual void visit_restaurant(Restaurant *restaurant) = 0;
        virtual ~Visitor() = default;
    };
}