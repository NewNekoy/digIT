#include "Tile.hpp"

Tile::Tile(Rectangle info)
{}

void Tile::use()
{}

void Tile::draw()
{}

bool Tile::isHover()
{
    return false;
}

void Tile::onHoverChange(bool state)
{}

Rectangle Tile::getSprite()
{
    return Rectangle({10, 10, 50, 50});
}

Tile::~Tile()
{}