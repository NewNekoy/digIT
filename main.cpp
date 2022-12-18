#include <iostream>
#include "include/raylib.h"
#include "Core/Core.hpp"

#include <vector>

using namespace std;

int main(void)
{
    Core *core = new Core;

    core->run();

    return 0;
}