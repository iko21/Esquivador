#include "Fantasmita.h"

Fantasmita::Fantasmita(int x,int y)
{
    this->x=x;
    this->y=y;
    this->surface=IMG_Load("fantasmita.png");
    hacia_arriba=true;
}

Fantasmita::~Fantasmita()
{
    //dtor
}

void Fantasmita::moverse()
{
    if(hacia_arriba)
        y--;
    else
        y++;

    if(y<30)
        hacia_arriba=false;
    if(y>300)
        hacia_arriba=true;
}
