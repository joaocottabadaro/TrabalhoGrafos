#include "Aresta.h"
#include <iostream>
using namespace std;
Aresta::Aresta()
{
   cout<<"criando aresta";
}

Aresta::~Aresta()
{
    cout<<"Deletando Aresta";
}
Aresta::Aresta(int id,float peso)
{
    identNo = id;
    pesoAresta = peso;
}

void Aresta::setPesoAresta(float peso)
{
    pesoAresta = peso;
}

float Aresta::getPesoAresta()
{
    return pesoAresta;
}

int Aresta::getIdNo()
{
    return identNo;
}

void Aresta::setIdNo(int id)
{
    identNo = id;
}
