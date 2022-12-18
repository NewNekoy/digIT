#ifndef CORE_CPP_
#define CORE_CPP_

#include <iostream>
#include <vector>
#include "../include/raylib.h"
#include "../Player/Player.hpp"
#include "../Tile/Tile.hpp"

class Core
{
public:
    Core();
    ~Core();

    void run();
private:
    int _screenWidth;
    int _screenHeight;
    Player *player;
    std::vector<Tile*> tiles;
};

#endif
