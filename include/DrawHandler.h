#ifndef DRAWHANDLER_H
#define DRAWHANDLER_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Block.h"

class DrawHandler
{
    public:
        DrawHandler(sf::RenderWindow*, std::vector<Block>*);
        virtual ~DrawHandler();
        void drawThings();
        void addToDraw(sf::Drawable*);
    private:
        std::vector<sf::Drawable*> drawables;
        std::vector<Block>* blocks;
        sf::RenderWindow* screen;
        sf::Texture background;
        sf::Texture spritesheet;
        sf::Sprite herosprite;
        sf::Sprite bgSprite;
        sf::Sprite blockSprite;
};

#endif // DRAWHANDLER_H
