#pragma once

#include <fstream>
#include <iostream>
#include <string>

namespace File
{

std::ifstream read(std::string path)
{
    if (!path.length())
    {
        std::cerr << "Error, invalid or no path provided." << std::endl;
        std::exit(1);
    }

    std::ifstream fin(path);

    if (!fin)
    {
        std::cerr << "Error while reading file." << std::endl;
        std::exit(1);
    }

    return fin;
}

} // namespace File