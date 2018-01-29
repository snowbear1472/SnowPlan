#pragma once

#include <string>
#include <vector>
#include <memory>


namespace SnowPlan
{
    class PlanNode
    {
        private:
            std::string text_;
            bool complete_;

            std::shared_ptr<::vector<PlanNode>> childs_ptr_;

        public:
            PlanNode() = default;
            PlanNode(const std::string& _text, const bool& _complete, std::vector<PlanNode>& _childs_ptr);

            PlanNode(const PlanNode& copy) = delete;
            PlanNode& operator = (const PlanNode& copy) = delete;

            PlandNode(PlanNode&& move) = delete;

        public:
            const std::string& text() const;
            const std::string& text(const std::string& _value);

            const bool& complete() const;
            const bool& complete(const bool& _value);

            const std::vector<PlanNode>& childs() const;
            const std::vector<PlanNode>& add_child(const PlanNode& _value);
            const std::vector<PlanNode>& remove_child(const PlanNode& _value);
            const std::vector<PlanNode>::const_iterator find_child(const PlanNode& _value) const;
    };
}