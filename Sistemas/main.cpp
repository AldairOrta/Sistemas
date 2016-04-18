#include <iostream>
#include <stdlib.h>
#include <list>

using namespace std;


int main()
{

    list <int> memoria;
    int opcion, opcion2 , tamanomem, tamanouam,tamproceso;
    cout<<"1.- TAMAÑO DE MEMORIA:  ";
    cin>>tamanomem; cout<<"\n";
    cout<<"2.- TAMAÑO DE ALMACENAMIENTO DE MEMORIA(UAM)     ";
    cin>>tamanouam; cout<<"\n";
 // se limpia
        system("clear");

    cout<<"1.- VER LISTA\n";
    cout<<"2.- INGRESAR PROCESO\n";
    cout<<"3.- ELIMINAR PROCESO\n";
    cin>>opcion;


    switch(opcion){

    case 1:
            break;
    case 2:

            system("clear");

            cout<<"1.- INGRESAR AL INICIO\n";
            cout<<"2.- INGRESAR AL FINAL\n";
            cin>>opcion2;

                switch(opcion2){

                case 1:

                int a;
                cin>>a;
                memoria.push_front(a);

                break;

                case 2 :
                cin>>a;
                memoria.push_back(a);

                break;
                }
            break;
    }
        return 0;

    }


