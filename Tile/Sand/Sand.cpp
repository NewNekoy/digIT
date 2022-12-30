#include "Sand.hpp"

Sand::Sand(Rectangle info) : Tile(info)
{
    sprite = info;
}

void Sand::use()
{
    
}

void Sand::onHoverChange(bool state)
{
    onHover = state;
}

bool Sand::isHover()
{
    return onHover;
}

void Sand::draw()
{
    if (onHover) DrawRectangleRec(sprite, RED);
    else DrawRectangleRec(sprite, YELLOW);
}

Rectangle Sand::getSprite()
{
    return sprite;
}

Sand::~Sand()
{}