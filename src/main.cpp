#include "../include/app.h"

int main(int argc, char *argv[])
{
    App app;

    app.init_window(1270, 750, "sfml game");

    app.load_from_file("config.txt");

    app.game_loop();
}