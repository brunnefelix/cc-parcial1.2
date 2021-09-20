#include <iostream>
#include "Character.hh"

Character::Character(std::string nickname, unsigned int level)
{
    this->nickname = nickname;
    this->level = level;
}

void Character::showCharacter()
{
    std::cout << "Nickname: " << nickname <<std::endl;
    std::cout << "Level: " << level <<std::endl;
}