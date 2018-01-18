#include "../include/SnowPlan/PlanNode.hh"

#include <iostream>


namespace SnowPlan
{
    void PlanNode::show(std::ostream& stream, const size_t& depth) const
    {        
        for (const auto& i : nodes)
        {
            stream << repeating_char(' ', depth);
            stream << i.name << ":" << std::endl;
            stream << repeating_char(' ' depth + 2);
            stream << i.text << std::endl;

            depth += 2;

            i.show(stream, depth);

            depth -= 2;
        }
    }
    void PlanNode::show(const size_t& depth) const
    {
        show(std::cout, depth);
    }
}