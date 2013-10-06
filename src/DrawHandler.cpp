#include "DrawHandler.h"

DrawHandler::DrawHandler(sf::RenderWindow* target, std::vector<Block>* bs)
{
    screen = target;
    drawables.clear();
    if (!background.loadFromFile("sprites/background.png"))
    {
        background.create(200, 200);
    }
    bgSprite.setTexture(background);

    if (!spritesheet.loadFromFile("sprites/kenney_32x32.png"))
    {
        spritesheet.create(200, 200);
    }
    herosprite.setTexture(spritesheet);
    herosprite.setTextureRect(sf::IntRect(0, 32*21, 32, 64));
    herosprite.setPosition(300.0f, 300.0f);
    blockSprite.setTexture(spritesheet);
    blockSprite.setTextureRect(sf::IntRect(32*30, 32*36, 32, 32));
    //30x36
    blocks = bs;
}

DrawHandler::~DrawHandler()
{
    //dtor

}

void DrawHandler::drawThings()
{
    screen->clear();
    screen->draw(bgSprite);
    screen->draw(*(drawables[0]));
    for (std::vector<Block>::iterator it = blocks->begin() ; it != blocks->end(); ++it)
    {
        sf::Vector2<int> bcoords = it->getCoords();
        blockSprite.setPosition(32*bcoords.x, 32*bcoords.y);
        screen->draw(blockSprite);
    }
    screen->draw(herosprite);
    screen->display();
}
void DrawHandler::addToDraw(sf::Drawable* thing)
{
    drawables.push_back(thing);
}
