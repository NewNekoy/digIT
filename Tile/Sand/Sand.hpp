#ifndef SAND_CPP_
#define SAND_CPP_

#include "../Tile.hpp"

class Sand : public Tile
{
public:
    Sand(Rectangle);
    ~Sand();

    void use();
    void draw();
    Rectangle getSprite();
private:
    Rectangle sprite;
};

#endif