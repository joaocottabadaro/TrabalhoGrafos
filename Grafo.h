#ifndef GRAFO_H
#define GRAFO_H
#include "No.h"
#include "Aresta.h"
#include <vector>
class Grafo
{
     private:
        std::vector <No> listaAdj;

    public:
        Grafo();
        ~Grafo();
        void adicionarNo(int  id);
        void removerNo(int id);
        int ordemGrafo();
        bool grafoCompleto();
        bool grafoKRegularidade(int k);
        void vizinhacaAberta(int id);
        void vizinhacaFechada(int id);
        void sequenciaGraus();
        void AdicionarArestaNos(int id , int id2,int peso);
        void imprimeGrafo();

};

#endif // GRAFO_H
