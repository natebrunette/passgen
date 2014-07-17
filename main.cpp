#include <iostream>
#include "Generator.h"

using namespace Tebru;

int main(int argc, const char * argv[])
{
    srand((unsigned int) time(0));

    Generator * generator = new Generator();
    int numCharacters = 50;
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

            if ("-s" == argument || "--symbols" == argument)
            {
                auto symbols = (std::string)argv[i + 1];
                if ("0" == symbols) {
                    symbols = "";
                }

                generator->setSymbols(symbols);
            }
        }
    }

    std::cout << generator->generate(numCharacters);
    std::cout << std::endl;

    delete generator;

    return 0;
}
