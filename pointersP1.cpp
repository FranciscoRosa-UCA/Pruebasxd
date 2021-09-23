#include<iostream>

#include<math.h>

using namespace std;

struct node{
    int dato;
    int  *sig;
};

class ListaSimple{
    public:
        node *pInicio;

    private:
        ListaSimple();
        ~ListaSimple();

        void InsertarEnLista();
        void InsInicio();
        
        void mostrarListaSimple();
        void mostrarListaPares();
        void mostrarListaImpares();
        void mostrarListaInversa();
        void mostrarListaInversaAux();

        delete p;
}

void

ListaSimple::ListaSimple(void){
    pInicio = NULL;
}

ListaSimple::~ListaSimple(void){
    nodo *p;

    while(){
        p = pInicio;
        pInicio = pInicio->sig;
        delete p;
    }

}

void ListaSimple::InsertarEnLista(void){
    int i;
    int n;
    cout<<"Cuantos numeros deseas generar o Ctrl-Z para terminar"<<endl;
    cin>>n;
    for (i=1; i<=n; i++){
        insInicio((rand()%99)+1)
    }
}

void ListaSimple::mostrarListaSimple(){
    nodo *p;
    cout<<"Los elementos de la lista son: " <<endl;

    p = pInicio;
    while(p){
         cout<< p->dato << endl;
         p = p->sig;
    }

    cout<< "Fin de mostrar lista..."<<endl;
}

void ListaSimple::mostrarListaPares(){
    nodo *p;
    cout<<"Los elementos pares de la lista son: " <<endl;

    p = pInicio;
    while(p){
        if(p->dato%2==0){
         cout<< p->dato << endl;
        }
        p = p->sig;
    }

    cout<< "Fin de mostrar lista de datos pares..."<<endl;
}

void ListaSimple::mostrarListaImpares(){
    nodo *p;
    cout<<"Los elementos impares de la lista son: " <<endl;

    p = pInicio;
    while(p){
        if(p->dato%2==1){
         cout<< p->dato << endl;
        }
        p = p->sig;
    }

    cout<< "Fin de mostrar lista de datos impares..."<<endl;
}

void ListaSimple::mostrarListaInversa(){

}

void ListaSimple::mostrarListaInversaAux(nodo *p){
    if(p){
        mostrarListaInversaAux(p->sig);
        cout<< p->datto << endl;
    }
}

int main(){
    ListaSimple objListaSimple;

    cout << endl;

    cout << "Programa de Lista Simple" << endl;
    
    cout << "Inserccion de datos" << endl;
    objListaSimple.InsertarEnLista();
    cin.clear();

    cout<< "Datos de lista: " << endl;
    objListaSimple.mostrarListaSimple();
    cin.clear();

    cout<< "Datos de lista Pares: " << endl;
    objListaSimple.mostrarListaPares();
    cin.clear();

    cout<< "Datos de lista Impares: " << endl;
    objListaSimple.mostrarListaImpares();
    cin.clear();

    cout<< "Datos de lista Inversa: " << endl;
    objListaSimple.mostrarListaInversa();


}