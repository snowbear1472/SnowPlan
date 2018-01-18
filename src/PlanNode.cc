#include "../include/SnowPlan/PlanNode.h"


namespace SnowPlan
{
    #ifdef DEBUG
        void PlanNode::show_info(std::ostream& stream, const size_t& depth) const
        {
            for (size_t i = 0; i < depth; i++)
            {
                stream << " ";
            }

             stream << "<" << name << ">" << description << "</" << name << ">\n\n"; 
        }
    #endif
}