#include <iostream>
#include <Grafo.h>
using namespace std;
int main()
{
    Grafo*grafo1 = new Grafo();
    grafo1->adicionarNo(2);
    grafo1->adicionarNo(7);
    grafo1->adicionarNo(3);
    grafo1->removerNo(2);
    grafo1->AdicionarArestaNos(2,7,3);
    grafo1->imprimeGrafo();
    return 0;
}
