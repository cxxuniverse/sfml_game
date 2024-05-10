#pragma once

#include <SFML/Graphics.hpp>

#include <string>

struct App
{
    sf::RenderWindow *window;

    void init_window(int width, int height, std::string title);

    void game_loop();
};