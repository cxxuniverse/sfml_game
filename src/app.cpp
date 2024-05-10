#include "../include/app.h"
#include "../include/file.h"

void App::init_window(int width, int height, const std::string &title)
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

            // window->draw(*shapes.at(1));

            window->display();
        }
    }
}

void App::load_from_file(const std::string &filename)
{
    std::ifstream fin = File::read(filename);

// #define TestRead
#ifdef TestRead

    std::string word{};

    while (std::getline(fin, word))
    {
        std::cout << word << "\n";
    }

#endif
}