#include "Player.hpp"

Player::Player(int width, int height)
{
    sprite = Rectangle({width / 2, height / 2, 28, 30});
    speed = 2.f;
    bool collision = false;
}

void Player::use(std::vector<Tile *> tiles)
{
    Vector2 position;
    position.x = sprite.x;
    position.y = sprite.y;

    if (IsKeyDown(KEY_RIGHT)) sprite.x += speed;
    if (IsKeyDown(KEY_LEFT)) sprite.x -= speed;
    if (IsKeyDown(KEY_UP)) sprite.y -= speed;
    if (IsKeyDown(KEY_DOWN)) sprite.y += speed;

    for(size_t i = 0; i < tiles.size(); i++) {
        if (CheckCollisionRecs(sprite, tiles[i]->getSprite())) {
            std::cout << "!!" << std::endl;
            sprite.x = position.x;
            sprite.y = position.y;
        }
    }
    
}

void Player::draw()
{
    DrawRectangleRec(sprite, RED);
}

Player::~Player()
{

}