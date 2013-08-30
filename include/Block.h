#ifndef BLOCK_H
#define BLOCK_H

#include <SFML/System.hpp>

class Block
{
    public:
        Block(int, int);
        virtual ~Block();
        sf::Vector2<int> getCoords();
    protected:
    private:
        sf::Vector2<int> coords;
};

#endif // BLOCK_H
