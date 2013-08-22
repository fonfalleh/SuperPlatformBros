#ifndef HERO_H
#define HERO_H

#include <Actor.h>


class Hero : public Actor
{
    public:
        Hero();
        virtual ~Hero();
        void update();
        void jump();
        void run(float);
    protected:
    private:
};

#endif // HERO_H
