#pragma once

#include "Util.hh"


namespace SnowPlan
{
    enum class ParseResult
    {
        Unkwon = -1,
        Done,
        Miss
    };

    class CommandLine
    {
        public:
            std::string line;

            std::string command_type;
            string_buffer args;

        public:
            ParseResult parse_command(const std::string& line);
    };
}