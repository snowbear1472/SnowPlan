#include "../include/SnowPlan/PlanNode.hh"

#include <algorithm>


namespace SnowPlan
{
    PlanNode::PlanNode(const std::string& _text, const bool& _complete, std::vector<PlanNode>& _childs):
        text_(_text),
        complete_(_complete),
        childs_ptr_(&_childs)
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

    const std::vector<PlanNode>& PlanNode::childs() const
    {
        return *childs_ptr_;
    }
    const std::vector<PlanNode>& PlanNode::add_child(const PlanNode& _value)
    {
        childs_ptr_->push_back(_value);
        return *childs_ptr_;
    }
    const std::vector<PlanNode>& PlanNode::remove_child(const PlanNode& _value)
    {
        auto it = std::find(childs_ptr_->begin(), childs_ptr_->end(), _value);
        childs_ptr_->erase(it);
    }
    std::vector<PlanNode>::iterator PlanNode::find_child(const PlanNode& _value)
    {
        return std::find(childs_ptr_->begin(), childs_ptr_->end(), _value);
    }
}