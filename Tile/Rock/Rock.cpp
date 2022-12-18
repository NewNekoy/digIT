#include "Rock.hpp"

Rock::Rock(Rectangle info) : Tile(info)
{
    sprite = info;
}

void Rock::use()
{
    
}

void Rock::draw()
{
    DrawRectangleRec(sprite, BLACK);
}

Rectangle Rock::getSprite()
{
    return sprite;
}

Rock::~Rock()
{}