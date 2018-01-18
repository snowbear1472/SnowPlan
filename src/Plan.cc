#include "../include/SnowPlan/Plan.h"

#include <iostream>

namespace SnowPlan
{
    void Plan::read_file(const std::string& path)
    {

    }
    void Plan::save_file(const std::string& path)
    {

    }

    #ifdef DEBUG
        void Plan::show_info(std::ostream& stream) const
        {

        }
        void Plan::show_info() const
        {
            show_info(std::cout);
        }
    #endif
}