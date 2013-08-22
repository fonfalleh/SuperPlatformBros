#include <SFML/Graphics.hpp>
#include <iostream>
#include "blob.h"
#include "InputHandler.h"

int main()
{
    //using blob::blob;
    sf::CircleShape shape(32.f);
    blob * bp = new blob(0, 0);

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    //shape.setOrigin(-100.0, -100.0);
    //shape.setOrigin(bp->getX(), bp->getY());
    shape.setFillColor(sf::Color::Green);

    // Starting the game clock
    sf::Clock* timer = new sf::Clock();
    sf::Time elapsed;
    while (window.isOpen())
    {
        elapsed = timer->restart();
        /**
            sf::Clock* timer = new sf::Clock();
    const int TIMESTEP = 20;//1000 / 60;
    int time = 0;
    sf::Time elapsed = timer->getElapsedTime();
    while (window.isOpen())
    {
        elapsed = timer->restart();
        time += elapsed.asMilliseconds();
        if(time < TIMESTEP)
            continue;

        time -= TIMESTEP;
        */

        // Experimental updating
        InputHandler::update(*bp, elapsed.asMicroseconds());
        shape.setPosition(bp->getX(), bp->getY());

        // Handle input
        // Handle updates
        // Handle drawing (and updates)
        // Drawing should be done by "camera" or drawing-manager

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
