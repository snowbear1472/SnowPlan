#pragma once

#include "PlanNode.hh"


namespace SnowPlan
{
    class Plan
    {
        private:
            std::string name_;
            std::string description_;
            std::string path_;

            std::vector<std::vector<PlanNode>> nodes_;

        public:
            Plan() = default

            Plan(const Plan& copy) = delete;
            Plan& operator = (const Plan& copy) = delete;

            Plan(Plan&& move) = delete;

        public:
            const std::string& name() const;
            const std::string& name(const std::string& _value);

            const std::string& description() const;
            const std::string& description(const std::string& _value);

            const std::string& path() const;

        public:
            const std::vector<std::vector<PlanNode>>& nodes() const;
            const std::vector<std::vector<PlanNode>>& add_node_vector(const std::vector<PlanNode>& _value);
            const std::vector<std::vector<PlanNode>>& remove_node_vector(const std::vector<PlanNode>& _value);
            std::vector<std::vector<PlanNode>>::iterator find_node_vector(const std::vector<PlanNode>& _value);

            const std::vector<PlanNode>& add_child(const PlanNode& _value);
            const std::vector<PlanNode>& remove_child(const PlanNode& _value);
            std::vector<PlanNode>::iterator find_child(const PlanNode& _value);
    };
}