#include "Hero.h"

Hero::Hero()
{
    //ctor
}

Hero::~Hero()
{
    //dtor
}

void Hero::update()
{
    if(!running)
        xVel = 0;
    if(xVel > 5)
        xVel = 5;
    if(xVel < -5)
        xVel = -5;

    xPos += xVel;
    yPos += yVel;

    running = false;
    if(!onGround)
    {
        yVel += (gravity / 60); //TODO testing, 9.82 m/s^2 / fps
    }
}

//When on land, can jump.
void Hero::jump()
{
    if(onGround){
        yVel += 10;
        onGround = false;
    }
}
void Hero::run(float value)
{
    xVel += value;
    running = true;
}
