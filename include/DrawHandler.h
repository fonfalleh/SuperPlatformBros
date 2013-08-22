#ifndef DRAWHANDLER_H
#define DRAWHANDLER_H

#include <SFML/Graphics.hpp>
#include <vector>

class DrawHandler
{
    public:
        DrawHandler(sf::RenderWindow*);
        virtual ~DrawHandler();
        void drawThings();
        void addToDraw(sf::CircleShape*);
    private:
        std::vector<sf::CircleShape*> shapes;
        sf::RenderWindow* screen;
        sf::Texture background;
        sf::Sprite sprite;
};

#endif // DRAWHANDLER_H
