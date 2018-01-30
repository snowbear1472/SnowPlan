#include "../include/SnowPlan/PlanNode.hh"

#include <algorithm>


namespace SnowPlan
{
    PlanNode::PlanNode(const std::string& _text, const bool& _complete):
        text_(_text),
        complete_(_complete)
    {}

    const std::string& PlanNode::text() const
    {
        return text_;
    }
    const std::string& PlanNode::text(const std::string& _value)
    {
        text_ = _value;
        return text_;
    }

    const bool& PlanNode::complete() const
    {
        return complete_;
    }
    const bool& PlanNode::complete(const bool& _value)
    {
        complete_ = _value;
        return complete_;
    }

    const PlanNode& PlanNode::selected_node() const
    {
        return *selected_node_;
    }
    const PlanNode& PlanNode::selected_node(const std::vector<PlanNode>::iterator& _it)
    {
        auto& mem = *_it;
        selected_node_ = std::make_unique<PlanNode>(mem);
    }

    const std::vector<PlanNode>& PlanNode::childs() const
    {
        return childs_;
    }
    const std::vector<PlanNode>& PlanNode::add_node(const PlanNode& _value)
    {
        childs_.push_back(_value);
        return childs_;
    }
    const std::vector<PlanNode>& PlanNode::remove_node(const PlanNode& _value)
    {
        auto it = std::find(childs_.begin(), childs_.end(), _value);
        childs_.erase(it);
    }
    std::vector<PlanNode>::iterator PlanNode::find_node(const PlanNode& _value) const
    {
        return std::find(childs_.begin(), childs_.end(), _value);
    }
}