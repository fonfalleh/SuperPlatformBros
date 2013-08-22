#ifndef ACTOR_H
#define ACTOR_H


class Actor
{
    public:
        Actor();
        Actor(float, float);
        virtual ~Actor();
        virtual void update();
        float getX();
        float getY();
    protected:
        static const float gravity = - 10;
        float xVel;
        float yVel;
        float xPos;
        float yPos;
        bool jumping;
        bool endjump;
        bool onGround;
        bool running;
    private:
};

#endif // ACTOR_H
