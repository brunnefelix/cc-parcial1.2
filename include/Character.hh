#pragma once
#include <string>

class Character
{
    private:
        std::string nickname{};
        unsigned int level{};
    public:
        Character(std::string nickname, unsigned int level);
        void showCharacter();
};