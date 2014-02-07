#ifndef FANTASMITA_H
#define FANTASMITA_H

#include "Enemigo.h"

class Fantasmita : public Enemigo
{
        bool hacia_arriba;
    public:
        Fantasmita(int x,int y);
        virtual ~Fantasmita();

        void moverse();
    protected:
    private:
};

#endif // FANTASMITA_H
