#include "header.hpp"

int menu(){
    int opcion;
    cout << "\n1- Realizar una transaccion" << endl;
    cout << "2- Mostrar todas las transacciones" << endl;
    cout << "3- Agregar al final de la lista" << endl;
    cout << "4- Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    cin.ignore();
    return opcion;
}



int main(){
    ListaSimple miBilletera(30,"monto inicial"); 
    
    bool continuar = true;
    double monto = 0;
    string D = "";
    do
    {
        switch (menu())
        {
        case 1:
            cout << "Ingrese el monto de la transaccion: ";
            cin >> monto;
            cin.ignore();
            cout << "Descripcion de la transaccion: ";
            getline(cin, D);
            miBilletera.insInicio(monto, D);
            break;

        case 2:
            cout << "Transacciones realizadas hasta ahora" << endl;
            miBilletera.mostrarLista();
            break;
        
        case 3:
            cout << "Monto a agregar al final: ";
            cin >> monto;
            cin.ignore();
            cout << "Descripcion de la transaccion: ";
            getline(cin, D);
            miBilletera.insFinal(monto, D);
            break;

        case 4:
            continuar = false;
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    } while (continuar != false);
    
    
    return 0;
}

