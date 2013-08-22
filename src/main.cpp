#include <SFML/Graphics.hpp>
#include <iostream>
#include "blob.h"
#include "InputHandler.h"
#include "Hero.h"
#include "DrawHandler.h"
int main()
{
    const int HEIGHT = 600;
    const int WIDTH = 800;
    sf::CircleShape shape(32.f);
    Hero* hero = new Hero();

    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Super Platform Bros!");
    sf::RenderWindow* wp = &window;
    DrawHandler* drawer = new DrawHandler(wp);
    shape.setFillColor(sf::Color::Green);
    drawer->addToDraw(&shape);

    // Starting the game clock

    sf::Clock* timer = new sf::Clock();
    sf::Time step = sf::seconds(1) / 60.0f; //60 fps
    sf::Time elapsed;
    while (window.isOpen())
    {
        elapsed += timer->restart();
        if(elapsed < step)
            continue;

        elapsed -= step;

        // Experimental updating
        InputHandler::update(hero);


        //TODO:
        // Handle input
        // Handle updates
        // Handle drawing (and updates)
        // Drawing should be done by "camera" or drawing-manager

        shape.setPosition(hero->getX(), HEIGHT/2  - hero->getY());

        drawer->drawThings();


        // Old magic that makes stuff work.
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
    return 0;
}
