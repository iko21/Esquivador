#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "SDL/SDL_image.h"

class Enemigo
{
    public:
        int x;
        int y;
        SDL_Surface* surface;

        Enemigo(){}
        Enemigo(int x, int y, SDL_Surface* surface);
        virtual ~Enemigo();

        virtual void moverse();
    protected:
    private:
};

#endif // ENEMIGO_H
