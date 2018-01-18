#include <iostream>
#include <algorithm>
#include <map>
#include <functional>

#include "../include/SnowPlan/Plan.h"


void write()
{

}

void load()
{

}

void save()
{

}

void read()
{

}

void view()
{

}

std::vector<SnowPlan::Plan> plans;
const std::map<std::string, std::function<void()>> command_list
{
    {
        "/load",
        load
    },
    {
        "/save",
        save
    }
};

int main(int argc, char** argv)
{
    if (argc > 0)
    {

    }
    else
    {
        
    }

    return 0;
}

std::vector<std::string> split(const std::string& str, const char& pattern)
{
    std::vector<std::string> result;
    std::string buffer;

    for (const auto& i : str)
    {
        if (i == pattern)
        {
            result.push_back(buffer);
            buffer = "";

            continue;
        }
        else
        {
            buffer += i;
        }
    }

    if (!buffer.empty())
    {
        result.push_back(buffer);
    }

    return result;
}

template <typename T_>
inline bool is_vector_contains(const std::vector<T_>& container, const T_& item)
{
    return (std::find(container.cbegin(), container.cend(), item) != container.cend());
}

void command(const std::string& cmd)
{
    auto tokens = split(cmd, ' ');

    if (tokens.size() < 3)
    {
        std::cerr << "unkwon command.";

        return ;
    }
    else
    {
        auto find = command_list.find(tokens.at(0));

        if (find != command_list.end())
        {
            auto func = find->second;
        }
    }
}

void command_help()
{
    std::cout << "/load {path}: load a plan file." << std::endl;
    std::cout << "/save {name}: save a plan." << std::endl;
}

void menu()
{
    std::cout << "SnowPlan" << std::endl << std::endl;
    std::cout << "command: ";
}

void input()
{
    std::string cmd = "";

    std::cin >> cmd;

    command(cmd);    
}