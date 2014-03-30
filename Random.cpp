#include <iostream>
#include <vector>
#include "Random.h"

namespace Tebru
{
    std::vector<char> & Random::append(const std::string charPool, const int &randomLength, std::vector<char> &randomString) const
    {
        auto stringLength = charPool.length();

        for (auto i = 0; i < randomLength; ++i)
        {
            randomString.push_back(charPool[rand() % stringLength]);
        }

        return randomString;
    }
}
