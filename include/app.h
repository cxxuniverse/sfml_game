#pragma once

#include <SFML/Graphics.hpp>

#include <string>
#include <vector>

struct App
{
    sf::RenderWindow *window;
    std::vector<sf::Shape *> shapes;

    void init_window(int width, int height, const std::string &title);

    void game_loop();

    void load_from_file(const std::string &filename);
};