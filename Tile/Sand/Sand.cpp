#include "Sand.hpp"

Sand::Sand(Rectangle info) : Tile(info)
{
    sprite = info;
}

void Sand::use()
{
    
}

void Sand::draw()
{
    DrawRectangleRec(sprite, YELLOW);
}

Rectangle Sand::getSprite()
{
    return sprite;
}

Sand::~Sand()
{}