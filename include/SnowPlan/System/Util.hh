#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include <memory>

namespace SnowPlan
{
    using string_buffer = std::vector<std::string>;

    string_buffer split(const std::string& str, const char& pattern);

    template <typename T_>
    inline bool is_vector_contains(const std::vector<T_>& container, const T_& item)
    {
        return (std::find(container.cbegin(), container.cend(), item) != container.cend());
    }

    inline std::string repeating_char(const char& ch, const size_t& num)
    {
        std::string buffer = "";

        for (size_t i = 0; i < num; i++)
        {
            buffer += ch;
        }

        return buffer;
    }

    string_buffer read_from_file(const std::string& path);
}