#include "Rock.hpp"

Rock::Rock(Rectangle info) : Tile(info)
{
    sprite = info;
}

void Rock::use()
{
    
}

void Rock::onHoverChange(bool state)
{
    onHover = state;
}

bool Rock::isHover()
{
    return onHover;
}

void Rock::draw()
{
    if (onHover) DrawRectangleRec(sprite, RED);
    else DrawRectangleRec(sprite, BROWN);
}

Rectangle Rock::getSprite()
{
    return sprite;
}

Rock::~Rock()
{}