#pragma once

#include <string>
#include <vector>


namespace SnowPlan
{
    class PlanNode
    {
        private:
            std::string text_;
            bool complete_;

            std::vector<PlanNode> childs_;

        public:
            PlanNode() = default;
            PlanNode(const std::string& _text, const bool& _complete, const std::vector<PlanNode>& _childs);

            PlanNode(const PlanNode& copy) = delete;
            PlanNode& operator = (const PlanNode& copy) = delete;

            PlandNode(PlanNode&& move) = delete;

        public:
            const std::string& text() const;
            const std::string& text(const std::string& _value);

            const bool& complete() const;
            const bool& complete(const bool& _value);

            const std::vector& childs() const;
            const std::vector& add_child(const PlanNode& _value);
            const std::vector& remove_child(const PlanNode& _value);
            const std::vector& find_child(const PlanNode& _value);
    };
}