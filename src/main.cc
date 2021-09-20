#include <iostream>
#include "Player.hh"

int main()
{
    Player* gamer1{new Player("brunnefelix", 76, 200, "air")};
    gamer1->showPlayer();
    std::cout <<std::endl;
    Player* gamer2{new Player("brunnene", 50, 160, "fire")};
    gamer2->showPlayer();
    

    std::cin.get();
    return 0;
}