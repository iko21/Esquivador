#include "Enemigo.h"


Enemigo::Enemigo(int x, int y, SDL_Surface*surface)
{
    this->x=x;
    this->y=y;
    this->surface=surface;
}

Enemigo::~Enemigo()
{
    //dtor
}

void Enemigo::moverse()
{
    x--;
}
