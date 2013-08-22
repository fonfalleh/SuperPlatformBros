#include "blob.h"

blob::blob()
{
    x = 0.0;
    y = 0.0;
}
blob::blob(float vx, float vy)
{
    x = vx;
    y = vy;
}
blob::~blob(){}
float blob::getX()
{
    return x;
}
float blob::getY()
{
    return y;
}
void blob::update(float dx, float dy)
{
    x += dx;
    y += dy;
}
