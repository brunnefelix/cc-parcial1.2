#include <iostream>
#include "Player.hh"

Player::Player(std::string nickname, unsigned int level, unsigned int strength, std::string power) : Character(nickname, level)
{
    this->strength = strength;
    this->power = power;
}

void Player::showPlayer()
{
    showCharacter();
    std::cout << "Strength: " << strength << std::endl;
    std::cout << "Power: " << power << std::endl;
}