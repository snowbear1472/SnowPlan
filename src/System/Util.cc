#include "../../include/SnowPlan/System/Util.hh"


namespace SnowPlan
{
    string_buffer split(const std::string& str, const char& pattern)
    {
        string_buffer result;
        std::string buffer = "";

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
}