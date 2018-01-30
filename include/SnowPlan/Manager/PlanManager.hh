#pragma once

#include "../Plan.hh"


namespace SnowPlan
{
    namespace Manager
    {
        class PlanManager
        {
            private:
                std::vector<Plan> plans_;
                std::unique_ptr<Plan> selected_plan_;

            public:
                PlanMager() = default;
        };
    }
}