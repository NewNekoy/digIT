#include "Core.hpp"

#include "../Tile/Rock/Rock.hpp"
#include "../Tile/Sand/Sand.hpp"
#include <stdlib.h>
#include <time.h>

Core::Core()
{
    srand (time(NULL));
    _screenWidth = 1920;
    _screenHeight = 1080;
    InitWindow(_screenWidth, _screenHeight, "gidIT");
    ToggleFullscreen();
    SetTargetFPS(60);
    player = new Player(_screenWidth, _screenHeight);
    for(int i = 0; i < _screenHeight; i += 35)
    {
        int height = i;
        for(int y = 0;  y < _screenWidth; y += 35)
        {
            if (y > (_screenWidth / 2) - 127 && y < (_screenWidth / 2) + 127
                && i > (_screenHeight / 2) - 127 && i < (_screenHeight / 2) + 127)
                    continue;

            int width = y;
            int random = rand() % 100 + 1;
            
            if (random > 10)
                tiles.push_back(new Rock({width, height, 32, 32}));
            else
                tiles.push_back(new Sand({width, height, 32, 32}));
        }
    }
}

void Core::run()
{
    Camera2D camera = {0};
    camera.target = (Vector2){ player->sprite.x, player->sprite.y};
    camera.offset = (Vector2){ (float)_screenWidth / 2, (float)_screenHeight / 2};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
    while (!WindowShouldClose())
    {
        player->use(tiles);

        camera.target = (Vector2){ player->sprite.x, player->sprite.y};

        BeginDrawing();

            ClearBackground(GREEN);
            
            BeginMode2D(camera);

                for(size_t i = 0; i < tiles.size(); ++i)
                    tiles[i]->draw();

                player->draw();

            EndMode2D();


        EndDrawing();
    }

    CloseWindow();
}

Core::~Core()
{

}