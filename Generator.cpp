#include <iostream>
#include <random>
#include "Characters.h"
#import "Random.h"
#include "Generator.h"

namespace Tebru
{
    std::string Generator::generate(
            const int &numCharacters,
            const int &numLetters,
            const int &numNumbers,
            const int &numSymbols
    ) const
    {
        Random * random = new Random();
        std::vector<char> randomCharList;

        // get the correct number/percentage of characters into the vector
        random->append(Characters::ALPHA, numLetters, randomCharList);
        random->append(Characters::NUMERIC, numNumbers, randomCharList);
        random->append(Characters::SYMBOL, numSymbols, randomCharList);

        // shuffle the vector so it's randomized
        std::random_shuffle(randomCharList.begin(), randomCharList.end(), arc4random_uniform);

        // set vector contents to string
        std::string randomString = "";
        for (auto i = 0; i < randomCharList.size(); ++i)
        {
            randomString += randomCharList[i];
        }

        delete random;

        return randomString;
    }
}

