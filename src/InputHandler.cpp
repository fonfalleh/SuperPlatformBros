#include "InputHandler.h"

void InputHandler::update(Hero* hero)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
        hero->jump();
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        hero->run(-0.7);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        hero->run(0.7);
    }
    hero->update(); //TODO WRONG
}
