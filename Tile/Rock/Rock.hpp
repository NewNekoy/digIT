#ifndef ROCK_CPP_
#define ROCK_CPP_

#include "../Tile.hpp"

class Rock : public Tile
{
public:
    Rock(Rectangle);
    ~Rock();

    void use();
    void draw();
    Rectangle getSprite();
private:
    Rectangle sprite;
};

#endif