#include "DrawHandler.h"

DrawHandler::DrawHandler(sf::RenderWindow* target)
{
    screen = target;
    shapes.clear();
    if (!background.loadFromFile("sprites\\background.png"))
        {
            background.create(200, 200);
        }
        sprite.setTexture(background);
}

DrawHandler::~DrawHandler()
{
    //dtor

}

void DrawHandler::drawThings()
{
    screen->clear();
    screen->draw(sprite);
    screen->draw(*(shapes[0]));
    screen->display();
}
void DrawHandler::addToDraw(sf::CircleShape* thing)
{
    shapes.push_back(thing);
}
