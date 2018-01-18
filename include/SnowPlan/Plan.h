#pragma once

#include "PlanNode.h"


namespace SnowPlan
{
    class Plan
    {
        public:
            std::string name;
            std::vector<PlanNode> nodes;

        public:
            void read_file(const std::string& path);
            void save_file(const std::string& path);

            #ifdef DEBUG
                void show_info(std::ostream& stream) const;
                void show_info() const;
            #endif
    };
}