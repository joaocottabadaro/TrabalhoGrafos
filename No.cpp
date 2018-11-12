#include "No.h"
#include "Aresta.h"
using namespace std;
#include <vector>


No::~No()
{
    cout<<"Deletando No";
}
No::No(int ident)
{
    id = ident;
    grau =0;
    vector <Aresta> listaAresta;
}


void No::setGrau(int grauNo)
{
    grau = grauNo;
}

int No::getGrau()
{
    return grau;
}

void No::setId(int ident)
{
    id = ident;
}

int No::getId()
{
    return id;
}

//float No::getAresta(int i){
 //   return listaAresta[i].getIdNo();
//}

//void No::adicionaAresta(int ident, float pesoAresta){
  //  Aresta aresta =  Aresta(ident,pesoAresta);
   // if(ident == id)
  //      grau += 2;
  //  else
  //      grau += 1;
 //   listaAresta.push_back(aresta);
//}

void No::removeAresta(int ident)
{
    if(ident == id)
        grau -= 2;
    else
        grau -= 1;
}
