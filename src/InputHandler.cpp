#include "InputHandler.h"
#include <SFML/Window.hpp>

void InputHandler::update(blob& dude, int elapsedTime)
{
    float dist = 400 / elapsedTime;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        dude.update(-dist, 0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        dude.update(dist, 0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        dude.update(0, -dist);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        dude.update(0, dist);
    }
}
