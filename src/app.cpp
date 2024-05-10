#include "../include/app.h"

void App::init_window(int width, int height, std::string title)
{
    window = new sf::RenderWindow(sf::VideoMode(width, height), title);
}

void App::game_loop()
{
    while (window->isOpen())
    {
        sf::Event event{};

        while (window->pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window->close();

            window->clear(sf::Color::Black);

            // window->draw();

            window->display();
        }
    }
}