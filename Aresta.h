#ifndef ARESTA_H
#define ARESTA_H
#include "No.h"
#include <iostream>
#include <vector>
class Aresta
{
     private:
        float pesoAresta;
        int identNo;
    public:
        Aresta();
        ~Aresta();
        Aresta(int id,float peso);
        float getPesoAresta();
        int getIdNo();
        void setIdNo(int id);
        void setPesoAresta(float peso);
};

#endif // ARESTA_H
