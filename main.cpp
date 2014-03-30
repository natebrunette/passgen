#include <iostream>
#include "Characters.h"
#include "Generator.h"

using namespace Tebru;

int main(int argc, const char * argv[])
{
    int numCharacters = 50;
    double percentNumbers = .25;
    double percentSymbols = .25;

    std::string argument;
    if (argc > 1)
    {
        for (int i = 1; i < argc; ++i)
        {
            argument = (std::string) argv[i];
            if ("-l" == argument || "--length" == argument)
            {
                numCharacters = std::strtol(argv[i + 1], nullptr, 10);
            }

            if ("-n" == argument || "--percent-numbers" == argument)
            {
                percentNumbers = std::strtod(argv[i + 1], nullptr);
            }

            if ("-s" == argument || "--percent-symbols" == argument)
            {
                percentSymbols = std::strtod(argv[i + 1], nullptr);
            }

            if ("--no-symbols" == argument)
            {
                percentSymbols = 0;
            }

            if ("--symbols" == argument)
            {
                Characters::SYMBOL = (std::string) argv[i + 1];
            }

        }
    }

    if (percentNumbers + percentSymbols > 1) {
        std::cout << "Percent numbers and symbols can not total > 1" << std::endl;

        return 1;
    }

    const auto numNumbers = (int) (numCharacters * percentNumbers);
    const auto numSymbols = (int) (numCharacters * percentSymbols);
    const auto numLetters = numCharacters - numNumbers - numSymbols;

    srand((unsigned int) time(0));

    Generator * generator = new Generator();

    std::cout << generator->generate(
            numCharacters,
            numLetters,
            numNumbers,
            numSymbols
    );
    std::cout << std::endl;

    delete generator;

    return 0;
}
