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

            std::vector<PlanNode> childs_;
        
        private:
            std::unique_ptr<PlanNode> selected_node_;

        public:
            PlanNode() = default;
            PlanNode(const std::string& _text, const bool& _complete);

            PlanNode(const PlanNode& copy) = delete;
            PlanNode& operator = (const PlanNode& copy) = delete;

            PlanNode(PlanNode&& move) = delete;

        public:
            const std::string& text() const;
            const std::string& text(const std::string& _value);

            const bool& complete() const;
            const bool& complete(const bool& _value);

            const PlanNode& selected_node() const;
            const PlanNode& selected_node(const std::vector<PlanNode>::iterator& _it);

        public:
            const std::vector<PlanNode>& childs() const;
            const std::vector<PlanNode>& add_node(const PlanNode& _value);
            const std::vector<PlanNode>& remove_node(const PlanNode& _value);
            std::vector<PlanNode>::iterator find_node(const PlanNode& _value) const;
    };
}