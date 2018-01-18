#pragma once

#include "../Plan.hh"


namespace SnowPlan
{
    class Buffer final
    {
        private:
            std::vector<Plan> plans;
        
        public:
            void add_plan(const Plan& plan);
            void remove_plan(const Plan& item);
    }
}