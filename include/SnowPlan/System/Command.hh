#pragma once

#include "CommandLine.hh"

#include <functional>


namespace SnowPlan
{
    class Command
    {
        public:
            std::string name;
            string_buffer help;
        
            std::function<void(const string_buffer& tokens)> excute_func;

        public:
            void excute(const CommandLine& command);
    };
}