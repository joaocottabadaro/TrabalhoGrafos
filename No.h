#ifndef NO_H
#define NO_H
#include <vector>

class Aresta;

class No
{

 private:
    int id;
    int grau;

public:
       std::vector<Aresta> listaAresta;
    No(int id);
    ~No();
    int getId() ;
    int getGrau();
    void setId(int id);
    void setGrau(int g);
    void adicionaAresta(int id,float pesoA);
    void removeAresta(int id);
    float getAresta(int index);

};

#endif // NO_H
