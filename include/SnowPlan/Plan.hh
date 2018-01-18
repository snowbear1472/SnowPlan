#pragma once

#include "PlanNode.hh"


namespace SnowPlan
{
    enum class SaveType
    {
        unkwon = 0,
        xml,
        json,
        yaml,
        html
    };

    class Plan
    {
        public:
            std::string name;
            std::string description;

            std::string path;

            std::vector<PlanNode> nodes;
        
        public:
            void load_from_file(const std::string& path);
            void save(const std::string& path) const;

            void show_info(std::ostream& stream) const;
            void show_info() const;

        private:
            void load_xml(const std::vector<std::string>& stream);
            void load_json(const std::vector<std::string>& stream);
            void load_yaml(const std::vector<std::string>& stream);
            void load_html(const std::vector<std::string>& stream);

            void save_xml(const std::string& path) const;
            void save_json(const std::string& path) const;
            void save_yaml(const std::string& path) const;
            void save_html(const std::string& path) const;
    };
}