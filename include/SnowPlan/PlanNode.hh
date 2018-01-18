#pragma once

#include <vector>
#include <string>
#include <ostream>


namespace SnowPlan
{
    class PlanNode
    {
        public:
            std::string name;
            std::string text;

            std::vector<PlanNode> nodes;

        public:
            void show(std::ostream& stream, const size_t& depth) const;
            void show(const size_t& depth) const;
    };
}