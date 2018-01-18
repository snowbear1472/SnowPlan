#pragma once

#include "Util.hh"
#include "Command.hh"
#include "Buffer.hh"


namespace SnowPlan
{
    class CommandList final
    {
        public:
            std::shared_ptr<Buffer> buffer;
            std::vector<Command> commands;

        private:
            void write(const Command& command);
            void read(const Command& command);
            void load(const Command& command);
            void rem(const Command& command);
            void save(const Command& command);
            void view(const Command& command);
            void exit(const Command& command;

        public:
            void init(std::shared_ptr<Buffer> ptr);
    };
}