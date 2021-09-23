#include<iostream>
#include<string>

using namespace std;

struct transaccion{
    double monto;
    string descripcion;
};

struct nodo
{
    struct transaccion dato;
    struct nodo *sig;
};

class ListaSimple{
    private:
        nodo *pInicio;
    
    public:
        ListaSimple();
        ListaSimple(double);
        ListaSimple(double,string);

        // ~ListaSimple();
        void insInicio(double);
        void insInicio(double, string);

        void insFinal(double);
        void insFinal(double, string);


        void mostrarLista(void);
        void mostrarAlreves(void);
        void mostrarListaRecursiva(void);
};

ListaSimple::ListaSimple(){
    pInicio = NULL;
}

ListaSimple::ListaSimple(double M){
    pInicio = NULL;
    insInicio(M);
}

ListaSimple::ListaSimple(double M, string D){
    pInicio = NULL;
    insInicio(M,D);
}

void ListaSimple::insInicio(double M){
    nodo *nuevo = new nodo;
    nuevo->dato.monto = M;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaSimple::insInicio(double M, string D){
    nodo *nuevo = new nodo;
    nuevo->dato.monto = M;
    nuevo->dato.descripcion = D;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaSimple::insFinal(double M){
    nodo *nuevo = new nodo;
    nuevo->dato.monto = M;
    nodo *p;
    p = pInicio;
    while(p->sig != NULL){
        p = p->sig;
    }
    p->sig = nuevo;
    nuevo->sig = NULL;
}

void ListaSimple::insFinal(double M, string D){
    nodo *nuevo = new nodo;
    nuevo->dato.monto = M;
    nuevo->dato.descripcion = D;

    if(!pInicio)
        pInicio = nuevo;
    else{
        nodo *p;
        p = pInicio;
        while(p->sig){
            p = p->sig;
        }
        p->sig = nuevo;
        nuevo->sig = NULL;
    }
}

void ListaSimple::mostrarLista(void){
    nodo *p;
    p = pInicio;
    while(p != NULL){
        cout << "Transaccion: " << p->dato.monto << " Descripcion: " << p->dato.descripcion << endl;
        p = p->sig;
    }
}