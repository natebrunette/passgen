#ifndef GENERATOR_H
#define GENERATOR_H

#include <iostream>

namespace Tebru
{
    class Generator
    {
    private:
        const std::string alphanumeric = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
        std::string symbols = "`~!@#$%^&*()-_=+\\|]}[{'\";:/?.>,<";
    public:
        std::string generate(const int &numCharacters) const;
        void setSymbols(const std::string &symbols);
    };
}

#endif