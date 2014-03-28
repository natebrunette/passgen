#ifndef GENERATOR_H
#define GENERATOR_H

#include <iostream>

namespace Tebru
{
    class Generator
    {
    public:
        std::string generate(
                const int &numCharacters,
                const int &numLetters,
                const int &numNumbers,
                const int &numSymbols
        ) const;
    };
}

#endif