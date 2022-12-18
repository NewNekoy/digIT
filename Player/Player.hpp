#ifndef PLAYER_CPP_
#define PLAYER_CPP_

#include <iostream>
#include <vector>
#include "../include/raylib.h"
#include "../Tile/Tile.hpp"

class Player
{
public:
    Player(int, int);
    ~Player();

    void use(std::vector<Tile *>);
    void draw();
    Rectangle sprite;
private:
    float speed;
    bool collision;
};

#endif