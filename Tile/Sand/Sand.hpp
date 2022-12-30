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
    void onHoverChange(bool);
    bool isHover();
    Rectangle getSprite();
private:
    Rectangle sprite;
    bool onHover;
};

#endif