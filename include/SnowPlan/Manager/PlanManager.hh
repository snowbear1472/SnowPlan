#pragma once

#include "../Plan.hh"


namespace SnowPlan
{
    namespace Manager
    {
        enum class SaveType
        {
            xml,
            json
        };

        class PlanManager
        {
            private:
                std::vector<Plan> plans_;
                std::unique_ptr<Plan> selected_plan_;

            public:
                PlanManager() = default;

                PlanManager(const PlanManager& copy) = delete;
                PlanManager& operator = (const PlanManager& copy) = delete;

                PlanManager(PlanManager&& move) = delete;
            
            public:
                const std::vector<Plan>& plans() const;
                const std::vector<Plan>& remove_plan(const std::vector<Plan>::iterator& _it);

                const Plan& selected_plan() const;
                const Plan& selected_plan(const std::vector<Plan>::iterator _it);

                const PlanNode& selected_node() const;
                const PlanNode& selected_node(const std::vector<PlanNode>::iterator& _it);  

            public:
                void load_from_file(const std::string& _path);
                void save(const std::string& _path, const SaveType& _type) const;

            private:
                Plan lff_xml(const std::vector<std::string>& _stream) const;
                Plan lff_json(const std::vector<std::string>& _stream) const;

                void s_xml() const;
                void s_json() const;
        };
    }
}