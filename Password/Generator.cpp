#include <iostream>
#include <random>
#include "Generator.h"

namespace Tebru
{
    std::string Generator::generate(const int &numCharacters) const
    {
        // combine symbols and alphanumeric characters
        const std::string pool = this->alphanumeric + this->symbols;
        std::string result = "";

        // generate random string
        for (auto i = 0; i < numCharacters; ++i) {
            result += pool[rand() % (pool.length() - 1)];
        }

        return result;
    }

    void Generator::setSymbols(const std::string &symbols)
    {
        this->symbols = symbols;
    }
}

