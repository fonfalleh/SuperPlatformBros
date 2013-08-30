#include "Block.h"

Block::Block(int x, int y):
    coords(x, y)
{
}

Block::~Block()
{
    //dtor
}
sf::Vector2<int> Block::getCoords()
{
    return coords;
}
