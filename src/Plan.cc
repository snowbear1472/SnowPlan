#include "../include/SnowPlan/Plan.hh"

#include <algorithm>


namespace SnowPlan
{
    const std::string& Plan::name() const
    {
        return name_;
    }
    const std::string& Plan::name(const std::string& _value)
    {
        name_ = _value;
        return name_;
    }

    const std::string& Plan::description() const
    {
        return description_;
    }
    const std::string& Plan::description(const std::string& _value)
    {
        description_ = _value;
        return description_;
    }

    const std::string& Plan::path() const
    {
        return path_;
    }

    const std::vector<std::vector<PlanNode>>& Plan::nodes() const
    {
        return nodes_;
    }
    const std::vector<std::vector<PlanNode>>& Plan::add_node_vector(const std::vector<PlanNode>& _value)
    {
        nodes_.push_back(_value);
        return nodes_;
    }
    const std::vector<std::vector<PlanNode>>& Plan::remove_node_vector(const std::vector<PlanNode>& _value)
    {
        auto it = std::find(nodes_.begin(), nodes_.end(), _value);
        nodes_.erase(it);

        return nodes_;
    }
    std::vector<std::vector<PlanNode>>::iterator Plan::find_node_vector(const std::vector<PlanNode>& _value) const
    {
        return std::find(nodes_.begin(), nodes_.end(), _value);
    }

    const std::vector<PlanNode>& Plan::add_child(const PlanNode& _value)
    {
        
    }
    const std::vector<PlanNode>& Plan::remove_child(const PlanNode& _value)
    {
        
    }
    std::vector<PlanNode>::iterator Plan::find_child(const PlanNode& _value) const
    {
        
    }
}