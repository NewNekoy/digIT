#include "Player.hpp"

Player::Player(int width, int height)
{
    sprite = Rectangle({width / 2, height / 2, 28, 30});
    speed = 2.f;
    bool collision = false;
}

void Player::use(std::vector<Tile *> tiles)
{
   
        if (IsKeyDown(KEY_RIGHT)) sprite.x += speed;
        if (IsKeyDown(KEY_LEFT)) sprite.x -= speed;
        if (IsKeyDown(KEY_UP)) sprite.y -= speed;
        if (IsKeyDown(KEY_DOWN)) sprite.y += speed;
    
}

void Player::draw()
{
    DrawRectangleRec(sprite, RED);
}

Player::~Player()
{

}