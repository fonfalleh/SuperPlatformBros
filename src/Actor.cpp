#include "Actor.h"

Actor::Actor():
xVel(0),
yVel(0),
xPos(0),
yPos(0),
jumping(false),
endjump(true),
onGround(true),
running(false)
{
    //ctor
}
Actor::Actor(float x, float y):
xVel(0),
yVel(0),
xPos(x),
yPos(y),
jumping(false),
endjump(true),
onGround(true),
running(false)
{

}
Actor::~Actor()
{
    //dtor
}

void Actor::update(){}

float Actor::getX()
{
    return Actor::xPos;
}

float Actor::getY()
{
    return Actor::yPos;
}
