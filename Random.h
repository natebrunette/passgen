#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <vector>

namespace Tebru
{
    class Random
    {
    public:
        std::vector<char>  &append(const char charPool[], const int &randomLength, std::vector<char> &randomString) const;

    };
}

#endif