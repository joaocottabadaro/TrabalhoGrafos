#include "Grafo.h"
using namespace std;
Grafo::Grafo()
{
        cout<<"criando grafos";
}


Grafo::~Grafo()
{
    cout<<"deletando grafos";
}


void Grafo::adicionarNo(int id)
{
    No * no = new No(id);
    listaAdj.push_back(*no);
}

void Grafo::removerNo (int id)
{
    vector <No>::iterator it;
    vector <Aresta>::iterator a;
    int i=0,j=0;
    for(it = listaAdj.begin() ; it != listaAdj.end(); ++it, i++ ){
        if ( it->getId() == id ){
            listaAdj.erase( listaAdj.begin() + i  );
        }
    }
    i =0;
    for(it = listaAdj.begin(); it != listaAdj.end(); ++it,i++){
            j = 0;
        for(vector<Aresta>::iterator a = listaAdj[i].listaAresta.begin(); a != listaAdj[i].listaAresta.end() && j < listaAdj[i].listaAresta.size() ;   ++a){
                if(a->getIdNo() == id) {
                    listaAdj[i].listaAresta.erase( listaAdj[i].listaAresta.begin() + j );
                }
                j++;
        }
    }
}

int Grafo::ordemGrafo()
{
    return listaAdj.size();
}

bool Grafo::grafoCompleto()
{
    int n = ordemGrafo();
    int num_Arestas = 0;
    for(int i = 0; i < n; i++) {
        num_Arestas += listaAdj[i].getGrau();
    }
    if(num_Arestas == n*(n-1))
        return true;
    return false;

}

bool Grafo::grafoKRegularidade(int k)
{
    for (vector<No>::iterator it = listaAdj.begin(); it != listaAdj.end(); ++it) {
                if(it->getGrau()!=k)
                {
                    return false;
                }
    }
    return true;

}

void Grafo::vizinhacaAberta(int id)
{
    int i=0;
    for (vector<No>::iterator it = listaAdj.begin(); it != listaAdj.end(); ++it, i++) {
         if( it->getId() == id )
         {
            for(vector<Aresta>::iterator arest = listaAdj[i].listaAresta.begin(); arest != listaAdj[i].listaAresta.end(); ++arest)
                cout << arest->getIdNo() << endl;
         }
    }
}

void Grafo::vizinhacaFechada(int id)
{
    int i=0;
    cout << id << endl;
    for (vector<No>::iterator it = listaAdj.begin(); it != listaAdj.end(); ++it, i++) {
         if( it->getId() == id )
         {
            for(vector<Aresta>::iterator arest = listaAdj[i].listaAresta.begin(); arest != listaAdj[i].listaAresta.end(); ++arest)
                cout << arest->getIdNo() << endl;
         }
    }

}

/* Nao terminado
bool Grafo::bipartido()
{
    int numNo = listaNos.size();
    int selecionaVert[numNo+1];
    for (int i = 1; i <= numNo; ++i)
        selecionaVert[i] = -1;

    //O loop faz uma busca em largura, e tenta selecionar 2 grupos, provando a bipartilidade.
    for (int i = 1; i <= V; i++)
      if (selecionaVert[i] == -1)
        if (tenta2ColorirGrafo(i, selecionaVert) == false)
           return false;

     return true;

}
*/

void Grafo::sequenciaGraus()
{
    for (vector<No>::iterator it = listaAdj.begin(); it != listaAdj.end(); ++it) {
            cout << it->getGrau() << " ";
    }
}

/*void Grafo::algoritmoPrim()
{
    int menor = -1;
    int i = 0;
    int cont = 0;

    // cria vetor para armazenar o id dos n�s da �rvore
    int tam =  listaAdj.size();
    int arvore[tam];

    for(int i=0;i<tam;i++)
        arvore[i]=-1;
    // fim - cria��o vetor arvore


while(cont < listaAdj.size()){
        vector<No>::iterator it = listaAdj[i];
        menor = it.listaAresta[0].getPesoAresta; //menor peso de aresta ligante
        for(vector<Aresta>::iterator arest = listaAdj[i].listaAresta.begin(); arest != listaAdj[i].listaAresta.end(); ++arest){
            bool flag=false;
            if(arest.getPesoAresta<menor){

                for(k=0;k<tam;k++)
                {
                    if(arest.GetId ==arvore[k]){
                        flag = true;
                    }
                }
            if(flag =false){
                menor=Aresta.getPesoAresta
                arvore[i+1]=arest.idNome;
                break;
            }

        }
        if(y==1;)
  arvore[k+1]=it.listaAresta[0].getID
    i++;
    cont++;
    k++;
    }


}
*/
void Grafo::AdicionarArestaNos(int id , int id2,int peso)
{
int i=0;
     for (int i=0;i<listaAdj.size();i++)
    {

        if(listaAdj[i].getId == id)
        {
            break;
        }
    }
    listaAdj[i].adicionaAresta(id2,peso);

    for (i=0;i<listaAdj.size();i++)
    {

        if(listaAdj[i].getId == id2){
            break;
        }


            i++;
    }
    listaAdj[i].adicionaAresta(id,peso);



}


