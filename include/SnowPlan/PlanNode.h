#pragma once

#include <ostream>
#include <string>
#include <vector>


namespace SnowPlan
{
    class PlanNode
    {
        public:
            std::string name;
            std::string description;

            std::vector<PlanNode> nodes;

        public:
            #ifdef DEBUG
                void show_info(std::ostream& stream, const size_t& depth) const;
            #endif
    };
}