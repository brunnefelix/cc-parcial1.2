#pragma once
#include <string>
#include "Character.hh"

class Player:public Character
{
    private:
        unsigned int strength{};
        std::string power{};
    public:
        Player(std::string nickname, unsigned int level, unsigned int strength, std::string power);
        void showPlayer();
};