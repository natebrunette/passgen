#include <iostream>
#include <vector>
#include "Random.h"

namespace Tebru
{
    std::vector<char> & Random::append(const char charPool[], const int &randomLength, std::vector<char> &randomString) const
    {
        auto stringLength = (int) strlen(charPool);

        for (auto i = 0; i < randomLength; ++i)
        {
            randomString.push_back(charPool[rand() % stringLength]);
        }

        return randomString;
    }
}
