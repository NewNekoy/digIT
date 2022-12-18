#ifndef TILE_CPP_
#define TILE_CPP_

#include <iostream>
#include <vector>
#include "../include/raylib.h"

class Tile
{
public:
    Tile(Rectangle);
    ~Tile();

    virtual void use();
    virtual void draw();
    virtual Rectangle getSprite();

private:
    
};

#endif